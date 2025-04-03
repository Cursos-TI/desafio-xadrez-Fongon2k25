#include <stdio.h>

int main() {
    int torre, rainha = 0, bispo = 1;

    while (bispo <= 5) {
        printf("Bispo movendo em diagonal (cima, direita).\n");
        bispo++;
    }

    for (torre = 1; torre <= 5; torre++) {
        printf("Torre movendo para direita.\n");
    }

    {
        do {
            printf("Rainha movendo para esquerda.\n");
            rainha++;
        } while (rainha < 8);
    }

    {
        for (int cavalo = 2; cavalo <= 1; cavalo--) {
            // Este loop não executará pois a condição é falsa
        }

        for (int i = 0; i < 2; i++) {
            printf("Cavalo movendo para baixo\n");
        }

        printf("Cavalo movendo para esquerda\n");
    }














    return 0;
}