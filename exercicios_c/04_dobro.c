#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    float num;

    printf("Programa que recebe um n�mero qualquer e exibe seu dobro.\n\n");
    printf("Digite um n�mero qualquer: ");
    scanf("%f", &num);

    float dobro = num * 2;

    printf("\nO dobro de %.2f � %.2f", num, dobro);

    return 0;
}
