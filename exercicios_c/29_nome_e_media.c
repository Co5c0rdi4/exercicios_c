#include <stdio.h>
#include <locale.h>
//Recebe o nome de um aluno, as 3 notas que obteve no semestre e exibe a média aritmética.
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    char nome[80];
    float p1, p2, p3;

    printf("\nDigite o nome: ");
    scanf("%79s", &nome);

    printf("\nDigite a primeira nota: ");
    scanf("%f", &p1);
    printf("\nDigite a segunda nota: ");
    scanf("%f", &p2);
    printf("\nDigite a terceira nota: ");
    scanf("%f", &p3);

    float media = (p1 + p2 + p3) / 3;

    printf("\nA média final do %s é %.1f", nome, media);

    return 0;
}
