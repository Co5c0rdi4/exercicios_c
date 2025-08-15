#include <stdio.h>
#include <locale.h>
//Calcula a amplitude total de uma série de 5 números, considerando que amplitude total = maior valor - menor valor.
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    double num[5];
    double maior, menor;

    for (int i=0;i<5;i++) {
        printf("\nDigite o %dº número: ", i+1);
        scanf("%lf", &num[i]);
    }

    maior = menor = num[0];

    for (int i=1;i<5;i++) {
        if (num[i]>maior){
            maior = num[i];
        }
        if (num[i]<menor){
            menor = num[i];
        }
    }

    double at = maior - menor;

    printf("\nO maior valor é %.2lf, o menor é %.2lf e a amplitude total é %.2lf\n", maior, menor, at);

    return 0;
}
