#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    float b, h;

    printf("Calculando a área de uma sala.\n\n");
    printf("Informe o valor da base em metros: ");
    scanf("%f", &b);
    printf("\nInforme o valor da altura em metros: ");
    scanf("%f", &h);

    float a = b * h;

    printf("A área dessa sala é %.2f metros.", a);

    return 0;
}
