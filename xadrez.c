#include <stdio.h>

void passobispo(int n) {
    if (n > 0) {
        printf("Cima + Direita %d \n ", n);  // Imprime o valor atual de n
        passobispo(n - 1);  // Chama a si mesma com n - 1
    }
}

void passotorre(int n) {
    if (n > 0) {
        printf("Direita %d \n ", n);  // Imprime o valor atual de n
        passotorre(n - 1);  // Chama a si mesma com n - 1
    }
}void passorainha(int n) {
    if (n > 0) {
        printf("Esquerda %d \n ", n);  // Imprime o valor atual de n
        passorainha(n - 1);  // Chama a si mesma com n - 1
    }
}
 // Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    
    
      
   
    int cavalo=3;

    printf("Movimentação das Peças:\n");

    printf("\nMovimentação do Bispo (Diagonal Superior Direita):\n");
    int bispo = 5;
    passobispo(bispo) ;
    
    printf("\nMovimentação da Torre (Direita):\n");
    int torre = 5;
    passotorre(torre) ;


    printf("\n\nMovimentação da Rainha (Esquerda):\n");
     int rainha = 8;
    passorainha(rainha) ;

    
    for (int i = 1; i <= cavalo; i++){   
        printf("\nMovimentação do cavalo\n");

        int baixo=2;
        do {
            printf("Passo para baixo\n");
            baixo--;
        } while (baixo > 0);
      
        int esquerda=1;
            while (esquerda>0)
            {
                printf("Passo para esquerda\n");
                esquerda--;
            }

    }
    
   
    return 0;
}

 // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
