#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
//Calcula as raízes de uma equação de segundo grau.
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    float a, b, c;

    printf("\nCalculando as raízes de uma equação de segundo grau.");
    printf("\nDigite o parâmetro A: ");
    scanf("%f", &a);
    printf("\nDigite o parâmetro B: ");
    scanf("%f", &b);
    printf("\nDigite o parâmetro C: ");
    scanf("%f", &c);

    float delta = (b*b)-4*a*c;
    float x1 = (-b+sqrt(delta))/(2*a);
    float x2 = (-b-sqrt(delta))/(2*a);

    if (a != 0){
        if (delta<0){
            printf("\nDelta é igual a %.2f, potanto é negativo, sendo assim impossível calcular", delta);
            exit(0);
        }
        else if(delta==0){
            printf("Raízes iguais");
        }
        else {
            printf("Raízes diferentes");

        }
        printf("\nAs raízes dessa equação são: x1 = %.2f e x2 = %.2f", x1, x2);
    }
    else {
        printf("\nO parâmetro A não pode ser igual a 0.");
    }
    return 0;
}
