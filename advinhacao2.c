#include <stdio.h>
#include <locale.h> // para a linguagem aceitar acentuação.

int main () {
    setlocale(LC_ALL, "Portuguese"); // para a linguagem aceitar acentuação.

    system("cls"); // limpar console
    printf("************************************\n");
    printf("* Bem-vindo ao jogo de advinhação! *\n");
    printf("************************************\n");


    //variáveis
    int numero = 42;
    int chute;
    int ganhou = 0;
    int tentativas = 1; // %d
    double pontos = 1000;// %f

    while(ganhou == 0) { // while = enquanto >> enquanto o ganhou for 0 (valor booleano)

    printf("Tentativa: %d\n", tentativas);
    printf("Insira seu chute: ");
    scanf("%d", &chute);
    printf("Seu chute foi: %d\n\n", chute); 

    int acertou = (chute == numero);
    int maior = (chute > numero);

    printf("Acertou: %d\n\n", acertou);

    if (chute < 0) {
        printf("Você não pode chutar números negativos!\n");
        continue;
    }

    else if (acertou) {
        printf("***************************\n");
        printf("* Parabéns! Você acertou! *\n");
        printf("***************************\n");
        ganhou = 1;
    } 
    
    else if (maior) {
            printf("Seu chute foi maior que o número secreto!\n");
        }

    else {
            printf("Seu chute foi menor que o número secreto!\n");
        }

        tentativas = tentativas + 1;
        double pontosPerdidos = (double)(chute - numero) / (double)2;
        pontos = pontos - pontosPerdidos;
       
    }
    printf("Fim de jogo!\n");
    printf("Você acertou em %d\n", tentativas - 1);
    printf("Total de pontos: %.1f\n", pontos);
}