#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    char senha = 'a';
    char tentativa;

    printf("\nDigite a senha: ");
    scanf("%c", &tentativa);

    if (senha == tentativa) {
        printf("\nSeja bem vindo!!!\n");
    }
    else {
        printf("\nAcesso negado.\n");
    }

    return 0;
}
