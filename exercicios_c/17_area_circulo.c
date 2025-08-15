#include <stdio.h>
#include <locale.h>
//Calcula a área de um raio testando se é maior que 0.
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    float r, pi=3.14;

    printf("\nDigite o valor do raio: ");
    scanf("%f", &r);

    if (r<0){
        printf("\nNão é possível realizar esse cálculo.");
    }
    else {
       float a = pi*(r*r);

    printf("\nA área desse círculo é igual a %.2f", a);
    }

    return 0;
}

