#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    char senha;
    int cont = 3;

    while (cont>0){
        printf("\nDigite a senha: ");
        scanf(" %c", &senha);

        if(senha == 'f'){
            printf("\nSenha correta. Seja bem vindo!!!\n");
            return 0;
        } else {
            cont--;
            printf("\nSenha incorreta!\n");
        }
    }
    printf("\nAcesso negado! seu cart�o foi bloqueado, procure a unidade mais pr�xima.\n");

    return 0;
}
