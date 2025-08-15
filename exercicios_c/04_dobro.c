#include <stdio.h>
#include <locale.h>
//Recebe um núemro qualquer e mostra o seu dobro.
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    float num;

    printf("Programa que recebe um número qualquer e exibe seu dobro.\n\n");
    printf("Digite um número qualquer: ");
    scanf("%f", &num);

    float dobro = num * 2;

    printf("\nO dobro de %.2f é %.2f", num, dobro);

    return 0;
}

