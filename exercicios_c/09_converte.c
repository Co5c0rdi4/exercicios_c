#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    float metros;

    printf("Converte metros em mil�metros.\n\n");
    printf("Digite um valor em metros: ");
    scanf("%f", &metros);

    float milimetros = metros * 1000;

    printf("\n%.2f metros � igual a %.2f mil�metros.", metros, milimetros);

    return 0;
}
