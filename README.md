# Projeto- Sistemas Embarcados 2022 - Game-Show
Projeto desenvolvido na disciplina de Sistemas Embarcados, com objetivo por em prática os conhecimentos obtidos durante as aulas.

# Projeto Game Show

## Descrição Resumida
Escolhemos o projeto 5 - Passa ou Repassa - que é sobre a infraestrutura de um jogo televisivo onde há uma questão e cada participante ou time deve ser o primeiro a apertar seu respectivo botão para responder à questão apresentada. Abaixo temos uma montegam esquemática do funcionamento do sistema embarcado:

![montagemembarcado](https://user-images.githubusercontent.com/80857074/208327480-41a2d2ed-dd0f-486d-82e7-e23f93287538.png)

Quem apertar primeiro será mostrado pelo LED que for aceso. O terceiro botão presente tem como função apagar o LED aceso e permitir que a disputa ocorra novamente.

## Hardware Computacional
### Viola Carrier Board
O __Viola Carrier Board__ é uma placa de suporte de baixo custo, propícia para aplicações de baixo desempenho. Mais informações podem ser obtidas em [Viola Carrier Board](https://www.toradex.com/pt-br/products/carrier-board/viola-carrier-board)

### __Colibri VF50__
O __Colibri VF50__ pertence a família de computadores embarcados em módulos módulos ARM Colibri. É um computador de módulo SoC (System-on-Chip) single core, otimizado para aplicações simples, como a que desejamos. Mais informações podem ser obtidas em  [Colibri VF50](https://www.toradex.com/pt-br/computer-on-modules/colibri-arm-family/nxp-freescale-vybrid-vf5xx)

## Hardware Mecatrônico
Utilizaremos **3 botões e 2 LEDs** no projeto, como demonstrado no esquemático. Além disso, alguns outros compontentes são necessários para o funcionamento, como resistores e fonte de alimentação para o circuito

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
### C  
Uma das principais linguagens de alto nível para programação de sistemas embarcados.

## Montagem e Funcionamento do Protótipo

Montamos o sistema conforme demonstrado no esquema apresentado acima. Conectamos os LEDs, resistores e botões de acionamento em uma protoboard, e a protoboard na placa embarcada, utilizando os pinos corretos para isso.
A montagem final pode ser observada na imagem abaixo:

![ligacao](https://user-images.githubusercontent.com/83880690/209365536-2a3c8c10-7d15-4367-8c67-c188f3a861f9.jpeg)

Após isso, enviamos o código presente em anexo nesse repositório Git (code.c) para a placa e fizemos o teste para ver se estava funcionando de acordo com o que havia sido proposto inicialmente para o projeto.
O vídeo demonstrando seu funcionamento pode ser observado abaixo:

![Funcionamento do Protótipo](https://user-images.githubusercontent.com/83880690/209365546-95502b3a-81e2-420f-ae61-72bf0c348f91.mp4)

Dessa forma, concluimos que o projeto funcionou conforme o planejado, porém levantamos algumas questões que poderiam ser melhoradas futuramente e erros que poderiam ser evitados.

### Propostas Futuras

O primeiro problema que encontramos que poderia ser evitado acontece para o caso de 2 botões serem apertados ao mesmo tempo. Fizemos alguns testes e observamos que se os 2 jogadores apertam seus botões ao mesmo tempo não ocorre nenhum erro, pois acenderá o LED daquele que o sistema embarcado entender que apertou primeiro. Porém, se o botão de jogador e de reset forem acionados ao mesmo tempo, ocorre uma espécie de "bug" e os LEDs não se acendem por completo, ocasionando uma rápida falha no sistema. Chegamos à conclusão de que isso poderia ser evitado talvez com melhorias no código.

Outra melhoria que pensamos que seria interessante é a modularização do código, separando algumas funções em uma biblioteca individual criada especificamente para o código, de forma que ele ficasse mais limpo e de mais fácil entendimento para quem o lesse pela primeira vez.

## Bibliografia:
### [Comandos README](https://raullesteves.medium.com/github-como-fazer-um-readme-md-bonit%C3%A3o-c85c8f154f8)
### [Comandos Git](https://comandosgit.github.io/)
### [Função de Strcat](https://www.geeksforgeeks.org/strcat-function-in-c-c-with-example/)
### [Função de Readwrite](https://www.geeksforgeeks.org/readwrite-structure-file-c/?ref=rp)
### [Função de Strcpy](https://www.geeksforgeeks.org/strcpy-in-c-cpp/)
### [Comandos de Input-output system calls](https://www.geeksforgeeks.org/input-output-system-calls-c-create-open-close-read-write/)
