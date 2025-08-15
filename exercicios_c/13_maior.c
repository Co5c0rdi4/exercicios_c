#include <stdio.h>
#include <locale.h>
//Recebe dois números quaisquer e diz qual entre eles é maior.
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int n1, n2;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("\nDigite o segundo número: ");
    scanf("%d", &n2);

    if (n1>n2) {
        printf("\n%d é maior que %d\n", n1, n2);
    }
    else{
        if (n1<n2) {
        printf("\n%d é maior que %d\n", n2, n1);
        }
        else {
        printf("Os números são iguais.");
        }
    }

    return 0;
}

