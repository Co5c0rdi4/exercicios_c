#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
//Concede aumento de 10% a funcion�rios que recebem menos de R$1000,00.
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    double salario;

    printf("\nDigite o sal�rio: ");
    scanf("%lf", &salario);

    if (salario<=1000){
        double aumento = salario * 0.1;
        salario = aumento + salario;
        printf("\nO sal�rio dever� receber um aumento de R$%.2lf, resultando em R$%.2lf.", aumento, salario);
    }
    else {
        printf("\nEsse sal�rio n�o receber� aumento.");
    }

    return 0;
}
