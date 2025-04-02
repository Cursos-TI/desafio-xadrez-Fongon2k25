#include <stdio.h>

int main (){

int torre, rainha, bispo = 1;



while (bispo <= 5)
{
    printf ("bispo movendo em diagonal (cima, direita).\n");
    bispo ++;
}

for (torre = 1; torre <= 5; torre++)
{
    printf("Torre movendo para direita.\n");
}

do
{
    printf("Rainha movendo para esquerda.\n");
    rainha ++;
} while (rainha < 8);














    return 0;
}