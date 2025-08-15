#include <stdio.h>
#include <locale.h>
//Recebe um número qualquer e diz se ele está entre 100 e 200.
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int num;

    printf("\nDigite um número qualquer: ");
    scanf("%d", &num);

    if (num>100 && num<200){
        printf("\nO número está entre 100 e 200");
    }

    return 0;
}
