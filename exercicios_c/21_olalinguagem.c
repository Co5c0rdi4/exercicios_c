#include <stdio.h>
#include <locale.h>
//Escreve "Olá linguagem C" na tela.
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
	printf("Olá linguagem C\n");

	return 0;
}
