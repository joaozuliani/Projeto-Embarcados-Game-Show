/*
Creation Date: 10-10-2022
Last Update: 12-16-2022
Authors (e-mail):   Gabriel Dacol (gabrieldacol@usp.br) nUSP 11232462
                    Gustavo Cassim (gustavocassim@usp.br) nUSP
                    João Lucas Zuliani (joao.lucas.zuliani@usp.br) nUSP 11316490
                    Mariana Paula (marianathompson@usp.br) nUSP 10696569
                    Pedro Marolde (pedro.marolde@usp.br) nUSP 10786761

*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <stdbool.h>

#define MAX 100

bool gameOver = false;

int info;

char path0[] = "/sys/class/gpio/export";
char path1[] = "/sys/class/gpio/gpio";
char path2[] = "/direction";
char path3[] = "/value";
char buffer[MAX];
char ports[5][3] = {"46","47","48","88","89"};


void writeLEDPort(char *port, char *value){
    strcat(strcpy(buffer, path1), port);
    strcat(strcpy(buffer, buffer), path3);
    info = open(buffer, O_WRONLY);
    write(info, value, 1);
    close(info);
}


bool readButton(char *port){
    char rd[3];
    strcat(strcpy(buffer, path1), port);
    strcat(strcpy(buffer, buffer), path3);    
    info = open(buffer, O_RDONLY);
    int info_rd = read(info, rd, 2);
    close(info);
    if(rd[0] == 48) return true;
    else return false;
}


void writeLED(int LedNumber, char *value){
    char gpio[3];
    switch (LedNumber){
    case 1:
        writeLEDPort(ports[3],value);
        break;
    
    case 2:
        writeLEDPort(ports[4],value); 
        break;

    default:
        writeLEDPort(ports[3],"0");
        writeLEDPort(ports[4],"0");
        break;
    }
}


void resetGame(){
    writeLED(1,"1");
    writeLED(2,"1");
    gameOver = false;
}


int main(int argc, char *argv[]){
    // export GPIO
    int i;
    info = open(path0, O_WRONLY);
    for(i = 0; i < 5; i++){
        strcat(strcpy(buffer, ports[i]), "\n");
        write(info, buffer, 3);
    }
    close(info);


    // Configure as input
    for(i = 0; i < 3; i++){
        strcat(strcpy(buffer, path1), ports[i]);
        strcat(strcpy(buffer, buffer), path2);    
        info = open(buffer, O_WRONLY);
        write(info, "in", 3);
        close(info);
    }

    // Configure as output
    for(i = 3; i < 5; i++){
        strcat(strcpy(buffer, path1), ports[i]);
        strcat(strcpy(buffer, buffer), path2);    
        info = open(buffer, O_WRONLY);
        write(info, "out", 3);
        close(info);
    }

    resetGame();
    while(true){
        printf("\t\t%d\t%d\t\t\n", !gameOver, readButton(ports[0]));
        usleep(1000);
        if(readButton(ports[0]) && !gameOver){
            writeLED(1, "0");
            printf("Player 1 Wins");
            gameOver = true;
        } else if(readButton(ports[1]) && !gameOver){
            writeLED(2, "0");
            printf("Player 2 Wins");
            gameOver = true;
        }
        
        if(readButton(ports[2])){
            resetGame();
            printf("Game Over! Starting again...");
        }
    }
 
    return EXIT_SUCCESS;
}

