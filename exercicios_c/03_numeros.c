#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");

    int num, num2;

    printf("Digite um número: ");
    scanf("%d", &num);
    printf("Digite um segundo número: ");
    scanf("%d", &num2);

    int soma = num + num2;
    int sub = num - num2;
    int mult = num * num2;
    float div = (float)num / num2;

    printf("O resultado da adção entre %d e %d é %d\n", num, num2, soma);
    printf("O resultado da diferença entre %d e %d é %d\n", num, num2, sub);
    printf("O resultado do produto entre %d e %d é %d\n", num, num2, mult);
    printf("O resultado da razão entre %d e %d é %.2f\n", num, num2, div);

    return 0;
}
