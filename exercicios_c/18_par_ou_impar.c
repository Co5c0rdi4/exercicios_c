#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int num;

    printf("\nDigite o n�mero: ");
    scanf("%d", &num);

    if (num%2==0){
        printf("\nO n�mero � par!");
    }
    else {
        printf("\nO n�mero � �mpar!");
    }

    return 0;
}
