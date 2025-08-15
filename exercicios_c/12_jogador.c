#include <stdio.h>
#include <locale.h>
//Informa a categoria de um jogador entre infantil, juvenil ou sênior conforme sua idade.
int main() {
    setlocale(LC_ALL,"Portuguese_Brazil");

    int idade;

    printf("Digite a idade do jogador: ");
    scanf("%d", &idade);

    if (idade < 18) {
        if (idade < 14) {
            printf("\nInfantil.");
        }
        else {
            printf("\nJuvenil");
        }
    }
    else {
        printf("\nSênior");
    }
}

