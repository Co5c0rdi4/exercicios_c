#include <stdio.h>
#include <locale.h>
//Recebe um n�mero qualquer e diz se ele est� entre 100 e 200.
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int num;

    printf("\nDigite um n�mero qualquer: ");
    scanf("%d", &num);

    if (num>100 && num<200){
        printf("\nO n�mero est� entre 100 e 200");
    }

    return 0;
}
