#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    float real;

    printf("Converte real em dolar.\n\n");
    printf("Digite o valor em reais: ");
    scanf("%f", &real);

    float dolar = real * 5.41;

    printf("\nR$%.2f convertido em dolar é $%.2f\n", real, dolar);

    return 0;
}
