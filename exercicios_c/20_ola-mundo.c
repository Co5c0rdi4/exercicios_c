#include <stdio.h>
#include <locale.h>
//Escreve "Olá, mundo!" na tela.
int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	printf("Olá, Mundo!\n");

	return 0;
}
