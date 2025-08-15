#include <stdio.h>
#include <locale.h>
//Calcula o consumo médio de um automóvel.
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    float distancia, combustivel_gasto;

    printf("\nDigite a distância percorrida em km: ");
    scanf("%f", &distancia);
    printf("\nDigite o total de combustível gasto: ");
    scanf("%f", &combustivel_gasto);

    float consumo = combustivel_gasto / distancia;

    printf("\nO consumo médio do veículo é de %.2f litros por km rodado.", consumo);

    return 0;
}
