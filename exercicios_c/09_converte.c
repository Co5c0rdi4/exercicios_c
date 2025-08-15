#include <stdio.h>
#include <locale.h>
//Recebe um valor em metros e converte para milímetros.
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    float metros;

    printf("Converte metros em milímetros.\n\n");
    printf("Digite um valor em metros: ");
    scanf("%f", &metros);

    float milimetros = metros * 1000;

    printf("\n%.2f metros é igual a %.2f milímetros.", metros, milimetros);

    return 0;
}

