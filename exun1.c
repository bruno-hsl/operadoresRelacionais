#include <stdio.h>

int main(){
    //Leia a idade e imprima se a pessoa é maior;
     
    //declarar variaveis
    int age;

    //entrada de dados
    printf("Digite sua idade: ");
    scanf("%d", &age);

    //saida
    if(age >= 18){
        printf("%d anos: maior de idade", age);
    }
    else{
        printf("%d anos: menor de idade", age);
    }
    
    return 0;
}