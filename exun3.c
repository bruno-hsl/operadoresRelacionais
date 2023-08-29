#include <stdio.h>

int main(){
    //3. Leia a altura e imprima se é maior que 1.8m;
    //declarar variaveis
    float altura;

    //entrada de dados
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    //saida de dados

    if(altura > 1.8){
        printf("Maior que 1.8");
    }
    else{
        printf("Menor que 1.8");
    }

    return 0;
}