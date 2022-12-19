# Projeto- Sistemas Embarcados 2022 - Game-Show
Projeto desenvolvido na disciplina de Sistemas Embarcados, com objetivo por em prática os conhecimentos obtidos durante as aulas.

# Projeto Game Show

## Descrição Resumida
Escolhemos o projeto 5 - Passa ou Repassa - que é sobre a infraestrutura de um jogo televisivo onde há uma questão e cada participante ou time deve ser o primeiro a apertar seu respectivo botão para responder à questão apresentada. Abaixo temos uma montegam esquemática do funcionamento:

![montagemembarcado](https://user-images.githubusercontent.com/80857074/208327480-41a2d2ed-dd0f-486d-82e7-e23f93287538.png)

O seu funcionamento é simples, após autorizado os dois participantes devem abertar seus respectivos botões. Quem apertar antes será mostrado pelo LED. O terceiro botão presente tem como função apagar o LED aceso e permitir que a disputa ocorra novamente.


## Hardware Computacional
### Viola Carrier Board
O __Viola Carrier Board__ é uma placa de suporte de baixo custo, propícia para aplicações de baixo desempenho. Mais informações podem ser obtidas em [Viola Carrier Board](https://www.toradex.com/pt-br/products/carrier-board/viola-carrier-board)

### __Colibri VF50__
O __Colibri VF50__ pertence a família de computadores embarcados em módulos módulos ARM Colibri. É um computador de módulo SoC (System-on-Chip) single core, otimizado para aplicações simples, como a que desejamos. Mais informações podem ser obtidas em  [Colibri VF50](https://www.toradex.com/pt-br/computer-on-modules/colibri-arm-family/nxp-freescale-vybrid-vf5xx)

## Hardware Mecatrônico
Utilizaremos **Botões e LEDs** no projeto, como demonstrado no esquemático. Além disso, alguns outros compontentes são necessários para o funcionamento, como resistores e fonte de alimentação para o circuito

## Softwares
### Ubuntu versão 20.04
O Ubuntu é um sistema operacional Linux completo, disponibilizado gratuitamente para download [no site](https://ubuntu.com/). A instalação do SO não será detalhada.

### Toolchain Colibri VF50
A Toolchain Colibri VF50 permiti a realização da compilação entre o sistema de base e do sistema embarcado, respectivamente o Ubuntu e o Linux/Yocto Project.
A instalação pode ser feita por meio do [tutorial](https://developer-archives.toradex.com/getting-started/module-2-my-first-hello-world-in-c/configure-toolchain-colibri-vfxx?som=colibri-vf50&board=iris-carrier-board&os=linux&desktop=linux)

### Linux/Yocto Project
O Linux/Yocto Project é o sistema operacional embarcado na placa da Toradex utilizada. No [site](https://developer-archives.toradex.com/getting-started/module-1-from-the-box-to-the-shell/update-the-linux-image-iris-carrier-board-colibri-vfxx?som=colibri-vf50&board=iris-carrier-board&os=linux&desktop=linux). 
 da Toradex tem disponibilizado um tutorial de instalação.

## Linguagem de programação
### C - Uma das principais linguagens de alto nível para programação de sistemas embarcados.

## Bibliografia:
### [Comandos README](https://raullesteves.medium.com/github-como-fazer-um-readme-md-bonit%C3%A3o-c85c8f154f8)
### [Comandos Git](https://comandosgit.github.io/)
### [Função de Strcat](https://www.geeksforgeeks.org/strcat-function-in-c-c-with-example/)
### [Função de Readwrite](https://www.geeksforgeeks.org/readwrite-structure-file-c/?ref=rp)
### [Função de Strcpy](https://www.geeksforgeeks.org/strcpy-in-c-cpp/)
### [Comandos de Input-output system calls](https://www.geeksforgeeks.org/input-output-system-calls-c-create-open-close-read-write/)
