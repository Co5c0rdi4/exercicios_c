#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int n1, n2;

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &n1);
    printf("\nDigite o segundo n�mero: ");
    scanf("%d", &n2);

    if (n1>n2) {
        printf("\n%d � maior que %d\n", n1, n2);
    }
    else{
        if (n1<n2) {
        printf("\n%d � maior que %d\n", n2, n1);
        }
        else {
        printf("Os n�meros s�o iguais.");
        }
    }

    return 0;
}
