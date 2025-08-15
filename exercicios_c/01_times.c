#include <stdio.h>
#include <locale.h>
//Apresenta um menu de opções para a escolha do time de futebol de alguém.
int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");

    printf("Esolha seu time:\n\n");
    printf("1 - Corinthians\n");
    printf("2 - Palmeiras\n");
    printf("3 - Santos\n");
    printf("4 - São Paulo\n");

    return 0;
}

