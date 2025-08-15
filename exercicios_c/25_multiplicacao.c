#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Recebe um número qualquer e imprime na tela a tabuada do mesmo.
int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");

	int num;
	int i = 1;
	int quit = 0;

	while(quit != 1) {
		printf("Digite um numero inteiro para obter a tabuada: ");
		scanf("%d", &num);

		for(i > 0; i <= 10; i++) {
			int result = num * i;
			printf("%d * %d = %d\n", num, i, result);
		}

	printf("\nDigite '1' para encerrar: ");
	scanf("%d", &quit);
	i = 1;
	}

	return 0;
}
