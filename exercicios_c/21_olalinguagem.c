#include <stdio.h>
#include <locale.h>
//Escreve "Ol� linguagem C" na tela.
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
	printf("Ol� linguagem C\n");

	return 0;
}
