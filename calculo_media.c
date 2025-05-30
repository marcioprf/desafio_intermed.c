#include <stdio.h>

int main () {
    float nota1;
    float nota2;
    float nota3;
    float media =0;
    

    printf(" insira a primeira nota: %.2f\n", nota1);
    scanf("%.2f",&nota1);
     printf(" insira a segunda nota: %.2f\n", nota1);
    scanf("%.2f",&nota2);
     printf(" insira a terceira nota: %.2f\n", nota1);
    scanf("%.2f",&nota3);
    media = ("nota1 + nota2 + nota3")/3;


    printf("a nota é %.2f\n", media);
    if (media >= 6) {
        printf("Aluno aprovado!");
    } else {
        printf("Aluno reprovado");
    }

return 0;
}
