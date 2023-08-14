#include <stdio.h>
#include <string.h>

int main(){
char musica[100];
char caractere;
int ocorrencia = 0;

printf("Nome da música: \n");
gets(musica);

printf("Caractere ");
scanf(" %c", &caractere);

for(int i = 0; musica[i] != '\0'; i++){
    if(musica[i] == caractere) {
        printf("Ocorrencia de caracteres na posicao %d \n", i);
        ocorrencia = 1;
    }
}

if(!ocorrencia){
    printf("Caractere nao encontrado \n");

}
return 0;
}