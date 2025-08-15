#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
//Calcula as ra�zes de uma equa��o de segundo grau.
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    float a, b, c;

    printf("\nCalculando as ra�zes de uma equa��o de segundo grau.");
    printf("\nDigite o par�metro A: ");
    scanf("%f", &a);
    printf("\nDigite o par�metro B: ");
    scanf("%f", &b);
    printf("\nDigite o par�metro C: ");
    scanf("%f", &c);

    float delta = (b*b)-4*a*c;
    float x1 = (-b+sqrt(delta))/(2*a);
    float x2 = (-b-sqrt(delta))/(2*a);

    if (a != 0){
        if (delta<0){
            printf("\nDelta � igual a %.2f, potanto � negativo, sendo assim imposs�vel calcular", delta);
            exit(0);
        }
        else if(delta==0){
            printf("Ra�zes iguais");
        }
        else {
            printf("Ra�zes diferentes");

        }
        printf("\nAs ra�zes dessa equa��o s�o: x1 = %.2f e x2 = %.2f", x1, x2);
    }
    else {
        printf("\nO par�metro A n�o pode ser igual a 0.");
    }
    return 0;
}
