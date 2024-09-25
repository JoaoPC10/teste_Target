#include <stdio.h>

int main()
{
    char resposta[40] = "Gostaria muito de trabalhar na Target!";
    int cont = 0 ;

    for(int i; i < 40; i++){
        if(resposta[i] == 'A' || resposta[i] == 'a'){
            cont++;
        }
    }
    if(cont != 0){
        printf("Existe!\n");
    }else
        printf("Não existe!\n");


    printf("Quantidade de letras 'a' ou 'A': %d\n", cont);
    return 0;
}