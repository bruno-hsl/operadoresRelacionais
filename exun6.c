#include <stdio.h>

main(){
    //declarar variaveis
    float media;

    //entrada de dados
    printf("Digite a media do aluno: ");
    scanf("%f", &media);

    //saida de dados

    if(media >= 7){
        printf("Aprovado");
    }
    else if(media >= 4 && media < 7){
        printf("Recuperacao");
    }
    else{
        printf("Reprovado");
    }

    return 0;
}