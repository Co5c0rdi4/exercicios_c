#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");

    int num, num2;

    printf("Digite um n�mero: ");
    scanf("%d", &num);
    printf("Digite um segundo n�mero: ");
    scanf("%d", &num2);

    int soma = num + num2;
    int sub = num - num2;
    int mult = num * num2;
    float div = (float)num / num2;

    printf("O resultado da ad��o entre %d e %d � %d\n", num, num2, soma);
    printf("O resultado da diferen�a entre %d e %d � %d\n", num, num2, sub);
    printf("O resultado do produto entre %d e %d � %d\n", num, num2, mult);
    printf("O resultado da raz�o entre %d e %d � %.2f\n", num, num2, div);

    return 0;
}
