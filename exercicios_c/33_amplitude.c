#include <stdio.h>
#include <locale.h>
//Calcula a amplitude total de uma s�rie de 5 n�meros, considerando que amplitude total = maior valor - menor valor.
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    double num[5];
    double maior, menor;

    for (int i=0;i<5;i++) {
        printf("\nDigite o %d� n�mero: ", i+1);
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

    printf("\nO maior valor � %.2lf, o menor � %.2lf e a amplitude total � %.2lf\n", maior, menor, at);

    return 0;
}
