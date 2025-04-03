#include <stdio.h>
// movendo torre 5 casas
void movendotorre (int casas){
    if (casas > 0){
        printf("Torre movendo para Direita.\n");
        movendotorre(casas - 1);
    }
}
// movendo rainha 8 casas 
void movendorainha (int casas){
    if (casas > 0){
        printf("Rainha movendo para esquerda.\n");
        movendorainha(casas - 1);
    }
}
// movendo bispo 5 casas 
void movendobispo (int casas){
    if (casas > 0){
        printf("Movendo bispo, diagonal(Direita,cima).\n");
        movendobispo(casas - 1);
    }
}





int main (){

movendotorre (5);
movendorainha(8);
movendobispo(5);
// movendo cavalo 
for (int cavalo = 2; cavalo <= 1; cavalo--)
{

}

{

    for(int i = 0; i < 2; i++){

    printf("cavalo movendo para baixo\n");

}

printf ("Cavalo movendo para esquerda\n");


}



return 0;








}