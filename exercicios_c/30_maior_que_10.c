#include <stdio.h>
#include <locale.h>
//Recebe um n�mero qualquer e exibe uma mensagem caso seja maior que 10.
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int num;

    printf("\nDigite um n�mero qualquer: ");
    scanf("%d", &num);

    if (num>10){
        printf("\nO n�mero digitado � maior que 10!!!");
    }

    return 0;
}
