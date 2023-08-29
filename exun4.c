#include <stdio.h>

int main(){
    //4. Leia o peso e imprima se é menor que 60kg;

    //declaracao de variaveis
    int peso;

    //entrada de dados
    printf("Digite seu peso: ");
    scanf("%d", &peso);

    //saida de dados

    if(peso < 60){
        printf("Peso menor que 60Kg");
    }
    else if(peso == 60){
        printf("Peso igual a 60kg");
    }
    else{
        printf("Peso maior que 60kg");
    }

    return 0;
}