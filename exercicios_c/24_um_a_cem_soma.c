#include <stdio.h>
#include <locale.h>
//Soma todos os n�meros de 1 a 100 e exibe o resultado.
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

	int num = 1;
	int soma;

	while(num <= 100) {

		printf("%d ", num);
		soma = num*(num+1)/2;

		num++;
	}

	printf("\nA soma entre os n�meros de um a cem �: %d\n", soma);

	return 0;
}
