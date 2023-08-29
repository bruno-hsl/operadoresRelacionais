#include <stdio.h>

main(){
    //Leia o salário e imprima se ganha mais que o salário mínimo;

    //declarar variaveis
    float salario;
    

    //entrada de dados
    printf("Digite seu  salario");
    scanf("%f", & salario);

    //saida de dados

    if(salario > 1320){
        printf("Ganha mais que o salario minimo");
    }
    else if(salario == 1320){
        printf("Ganha um salario minimo");
    }
    else{
        printf("Ganha menos que um salario minimo");
    }

    return 0;

}