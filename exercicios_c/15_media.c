#include <stdio.h>
#include <locale.h>

int main() {
    setlocale (LC_ALL, "Portuguese_Brazil");

    int num1, num2, num3;

    printf("\nDigite o primeiro n�mero: ");
    scanf("%d", &num1);

    printf("\nDigite o segundo n�mero: ");
    scanf("%d", &num2);

    printf("\nDigite o terceiro n�mero: ");
    scanf("%d", &num3);

    float media = (float)(num1+num2+num3)/3;

    printf("\nA m�dia entre %d, %d e %d � %.2f", num1, num2, num3, media);

    return 0;
}
