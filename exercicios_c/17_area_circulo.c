#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    float r, pi=3.14;

    printf("\nDigite o valor do raio: ");
    scanf("%f", &r);

    if (r<0){
        printf("\nN�o � poss�vel realizar esse c�lculo.");
    }
    else {
       float a = pi*(r*r);

    printf("\nA �rea desse c�rculo � igual a %.2f", a);
    }

    return 0;
}
