#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char frase[50];
    int vogal = 0;

    printf("Informe uma frase: ");
    gets(frase);

    for(int i = 0; i < strlen(frase); i++){
        if(tolower(frase[i]) == tolower('a') || tolower(frase[i]) == tolower('e') || tolower(frase[i]) == tolower('i') || tolower(frase[i]) == tolower('o') || tolower(frase[i]) == tolower('u')){
            vogal++;
        }
    }

    printf("Quantidade de vogais: %d\n", vogal);
}