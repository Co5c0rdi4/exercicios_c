#include <stdio.h>
#include <locale.h>
//Calcula o consumo m�dio de um autom�vel.
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    float distancia, combustivel_gasto;

    printf("\nDigite a dist�ncia percorrida em km: ");
    scanf("%f", &distancia);
    printf("\nDigite o total de combust�vel gasto: ");
    scanf("%f", &combustivel_gasto);

    float consumo = combustivel_gasto / distancia;

    printf("\nO consumo m�dio do ve�culo � de %.2f litros por km rodado.", consumo);

    return 0;
}
