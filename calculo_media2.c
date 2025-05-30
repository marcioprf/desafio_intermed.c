#include <stdio.h>

int main () {
    float nota1;
    float nota2;
    float nota3;
    float media =0;
    printf("*** Programa de calculo de Média ***\n");

    printf(" insira a primeira nota: \n\n");
    scanf("%f",&nota1);
     printf(" insira a segunda nota: \n\n");
    scanf("%f",&nota2);
     printf(" insira a terceira nota: \n\n");
    scanf("%f",&nota3);
    media = (nota1 + nota2 + nota3)/3;
    


    printf("a média é %.1f\n\n", media);
    if (media >= 6) {
        printf("Aluno aprovado!");
    } else {
        printf("Aluno reprovado");
    }

return 0;
}
