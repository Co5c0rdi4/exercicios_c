#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int num;

    printf("\nDigite o número: ");
    scanf("%d", &num);

    if (num%2==0){
        printf("\nO número é par!");
    }
    else {
        printf("\nO número é ímpar!");
    }

    return 0;
}
