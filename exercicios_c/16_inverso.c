#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int n1, n2, n3;

    printf("\nDigite o primeiro número: ");
    scanf("%d", &n1);

    printf("\nDigite o segundo número: ");
    scanf("%d", &n2);

    printf("\nDigite o terceiro número: ");
    scanf("%d", &n3);

    printf("\n%d %d %d", n3, n2, n1);

    return 0;
}
