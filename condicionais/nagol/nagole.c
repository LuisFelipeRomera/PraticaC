#include <stdio.h>
 
int main() {
    // Declaracao de variaveis
    int L, C, X, Y; // linhas, colunas, coordenada X (linha), coordenada Y (coluna)

    // Leitura de valores
    scanf("%d %d %d %d", &L, &C, &X, &Y);

    // Segue a logica:
    // Se C for par, a linha sempre comeca sendo riscada com a mao direita
    // Se C for impar, a linha comeca sendo riscada com maos alternadas
    // Ou seja, 
    // Se C for impar e L for par, a linha comeca sendo riscada com a mao direita
    // Se C for impar e L for impar, a linha comeca sendo riscada com a mao esquerda

    // Agora vamos implementar essa logica

    if (C%2 == 0) { // Se C for par, comeca pela direita
        if (Y%2 == 0) { // Se Y (coluna) for par
            printf("Direita\n");
        } else {
            printf("Esquerda\n");
        }
    } else { // Se C for impar, alterna
        if (X%2 == 0) { // Se X (linha) for par 
            if (Y%2 == 0) { // Se Y (coluna) for par 
                printf("Direita\n");
            } else {
                printf("Esquerda\n");
            }
        } else { // Se X (linha) for impar 
            if (Y%2 == 0) { // Se Y (coluna) for par 
                printf("Esquerda\n");
            } else {
                printf("Direita\n");
            }
        }
    }
 
    return 0;
}
