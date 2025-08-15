#include <stdio.h>
#include <locale.h>
//Recebe um número qualquer e exibe uma mensagem caso seja maior que 10.
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int num;

    printf("\nDigite um número qualquer: ");
    scanf("%d", &num);

    if (num>10){
        printf("\nO número digitado é maior que 10!!!");
    }

    return 0;
}
