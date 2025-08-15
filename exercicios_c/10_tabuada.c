#include <stdio.h>
#include <locale.h>
//Imprime na tela a tabuada do 5.
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int r = 5;

    printf("Tabuada do 5:\n\n");
    printf("5 x 1 = %d\n", r * 1);
    printf("5 x 2 = %d\n", r * 2);
    printf("5 x 3 = %d\n", r * 3);
    printf("5 x 4 = %d\n", r * 4);
    printf("5 x 5 = %d\n", r * 5);
    printf("5 x 6 = %d\n", r * 6);
    printf("5 x 7 = %d\n", r * 7);
    printf("5 x 8 = %d\n", r * 8);
    printf("5 x 9 = %d\n", r * 9);
    printf("5 x 10 = %d\n", r * 10);

    return 0;
}

