#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    float g=9.8, t;

    printf("/nDigite o tempo da queda em segundos: ");
    scanf("%f", &t);

    float v = g*t;

    printf("\nA velocidade de queda atingida ser� de %.2f metros por segundo.", v);

    return 0;
}
