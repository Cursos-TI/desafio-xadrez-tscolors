#include <stdio.h>

// Caso tenha problemas com acentos adicione a biblioteca #include <windows.h> e abaixo do main coloque SetConsoleOutputCP(65001);

int main() {
    
    //Movimento das peças
    const int BISPO_MOV = 5; // Bispo se move 5 casas
    const int TORRE_MOV = 5; // Torre se move 5 casas
    const int RAINHA_MOV = 8; // Rainha se move 8 casas

      // Movimentação do Bispo: 5 casas Diagonal superior direita
     printf("Movimentação do Bispo:\n");
    for(int i = 1; i <= BISPO_MOV; i++)
    {
        printf("Diagonal superior direita (Movimento %d)\n",i);
    }

    // Movimentação da torre: 5 casa para a direita
    printf("\nMovimentação da Torre:\n");
    int i = 1;
    while(i <= TORRE_MOV)
    {
        printf("Direita (Movimento %d)\n", i);
        i++;
    }

    // Movimentação da Rainha: 8 casas esquerda
    printf("\nMovimentação da Rainha:\n");
     int j = 1;
     do 
     {
        printf("Esquerda (Movimento %d)\n", j);
        j++;
     }while(j <= RAINHA_MOV);
    
    
    

    return 0;
}
