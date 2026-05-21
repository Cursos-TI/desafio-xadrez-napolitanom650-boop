#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

#include <stdio.h>
 #include <stdlib.h>
 int main(){
system("chcp 65001 > nul");

printf("---Jogo de Xadrez---\n");
printf(" --------------------\n");
printf("\n ----Torre---\n");

for (int T = 0; T < 5; T++){ // variavel interna da torre
      printf("Direita\n");
} //torre se move 5 vezes a direita enquanto t for menor que 5
printf("\n-----Bispo----\n");

  int B = 0; // variavel bispo
 while (B <5){
//bispo se move para cima e direita enquanto b for menor que 5
printf("Cima\n");
printf("Direita\n");

B++;
 } 
 printf("\n--- Rainha---\n");
 int R = 8; // variavel rainha 
 int basequeen = 0;
do { 
printf("Esquerda\n");
basequeen++;
} while (basequeen < R);
//rainha se move 8 vezes a esquerda enquanto basequeen for menor que r
printf("\n--- Cavalo---\n");
int j = 1;
for(int i = 0; i <2; i++){
 printf("Baixo\n ");

 while (i ==1 && j<= 1){
    printf("Cavalo Esquerda\n ");
    j++;
 }

}


 


 


    return 0;
}
