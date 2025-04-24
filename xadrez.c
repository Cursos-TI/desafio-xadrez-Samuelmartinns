#include <stdio.h>


void lady(int sal) {
    
    if (sal>0){
        printf("\nesquerda");
        lady(sal-1);
    }
}
        void bispoo(int gado) {
        if (gado>0){
        printf("cima, direita\n");
        bispoo(gado-1);
    }

}
void toree(int torre1) {
    if (torre1>0){
  printf("direita\n");
    toree(torre1-1);
}

}

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    printf("\ntorre mexeu para\n\n");
    int bispo , torre, rainha;
    for (torre = 1 ;torre<=5; torre++){
        printf("direita\n");
    }
    printf("\nbispo mexeu para\n\n");
    for (bispo=1;bispo<=5; bispo++){
        printf("cima, direita\n");
    }
    printf("\nrainha mexeu para\n\n");
    for (rainha=1;rainha<=8;rainha++){
        printf("esquerda \n");
    }
    
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\ncavalo mexeu para\n\n");
    int movdocav=1;
while (movdocav--){
for (int x = 1; x <= 2; x++)
{
printf("baixo\n");
}
printf("esquerda\n");
}

        

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    printf("\ndesafio nivel mestre\n\nrainha mexeu para:");
    lady(8);

    printf("\nbispo mexeu para\n\n");
    bispoo(5);

    printf("\ntorre mexeu para\n\n");
    toree(5);


    return 0;
}
