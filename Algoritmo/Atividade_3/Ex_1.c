/*Implemente um programa que leia o nome de 5 pessoas e mostre os nomes
armazenados. Utilize vetores.*/

#include <stdio.h>
#include <string.h>

int main(){

char nomes[5][50];

printf("Digite 5 nomes: \n");

for(int i = 0; i < 5; i++){
    printf("Nome %d: ", i + 1);
    scanf("%s", nomes[i]);
}

printf("\n Nomes armazenados: \n");

for(int i = 0; i < 5; i++){
    printf("%d: %s\n", i +1, nomes[i]);
}
return 0;
}