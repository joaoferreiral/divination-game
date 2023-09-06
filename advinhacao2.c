#include <stdio.h>
#include <locale.h> // para a linguagem aceitar acentua��o.

int main () {
    setlocale(LC_ALL, "Portuguese"); // para a linguagem aceitar acentua��o.

    system("cls"); // limpar console
    printf("************************************\n");
    printf("* Bem-vindo ao jogo de advinha��o! *\n");
    printf("************************************\n");


    //vari�veis
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
        printf("Voc� n�o pode chutar n�meros negativos!\n");
        continue;
    }

    else if (acertou) {
        printf("***************************\n");
        printf("* Parab�ns! Voc� acertou! *\n");
        printf("***************************\n");
        ganhou = 1;
    } 
    
    else if (maior) {
            printf("Seu chute foi maior que o n�mero secreto!\n");
        }

    else {
            printf("Seu chute foi menor que o n�mero secreto!\n");
        }

        tentativas = tentativas + 1;
        double pontosPerdidos = (double)(chute - numero) / (double)2;
        pontos = pontos - pontosPerdidos;
       
    }
    printf("Fim de jogo!\n");
    printf("Voc� acertou em %d\n", tentativas - 1);
    printf("Total de pontos: %.1f\n", pontos);
}