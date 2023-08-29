#include <stdio.h>

int main(){
    /*5. Avalie a relação abaixo:

    10 % 5 ∗ 2 <> 5 ∗ 2 + 1

    O resultado seria verdadeiro ou falso?*/


    //declarar variavel
    int operacao1, operacao2;
     operacao1 = (10 % 5 * 2);
     operacao2 =  (5 * 2 + 1);

     //saida de dados

     if(operacao1 == operacao2){
        printf("Verdadeiro");
     }
     else{
        printf("falso");
     }
 

    return 0;
}