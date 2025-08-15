#include <stdio.h>
#include <locale.h>
/*Exibe o preço final a pagar pela quantidade de xerox a ser realizada, 
sendo que o preço de R$0,25 por unidade cai para R$0,20 quando acima de 100 unidades.*/ 
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    float xerox, valor;

    printf("Quantidade a ser impressa: ");
    scanf("%f", &xerox);

    if (xerox <= 100) {
        valor = xerox * 0.25;
        printf("\n%.2f copias custará R$%.2f", xerox, valor);
    }
    else {
        valor = xerox * 0.20;
        printf("\n%.2f copias custará R$%.2f", xerox, valor);
    }

    return 0;
}

