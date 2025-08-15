#include <stdio.h>
#include <locale.h>
//Recebe três números quaisquer e calcula a média aritmética entre eles.
int main() {
    setlocale (LC_ALL, "Portuguese_Brazil");

    int num1, num2, num3;

    printf("\nDigite o primeiro número: ");
    scanf("%d", &num1);

    printf("\nDigite o segundo número: ");
    scanf("%d", &num2);

    printf("\nDigite o terceiro número: ");
    scanf("%d", &num3);

    float media = (float)(num1+num2+num3)/3;

    printf("\nA média entre %d, %d e %d é %.2f", num1, num2, num3, media);

    return 0;
}

