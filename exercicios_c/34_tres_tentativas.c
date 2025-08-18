#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
//Testa uma senha com três tentativas, em caso de três erros bloqueia o cartão.
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
    printf("\nAcesso negado! seu cartão foi bloqueado, procure a unidade mais próxima.\n");

    return 0;
}

