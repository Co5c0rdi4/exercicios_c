#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
//Jogo de adivinhar um número entre 1 e 100.
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

	//Imprime o cabeçalho do jogo.
	printf("\n\n\n");
	printf("	       T~~                                  \n");
	printf("               |                                    \n");
	printf("              /'\\                                  \n");
	printf("      T~~     |'| T~~                               \n");
	printf("  T~~ |    T~ WWWW|                                 \n");
	printf("  |  /'\\   |  |  |/\\T~~                           \n");
	printf(" /'\\ WWW  /'\\ |' |WW|                             \n");
	printf("WWWWW/\\| /   \\|'/\\|/'\\      BEM VINDO AO        \n");
	printf("|   /__\\/]WWW[\\/__\\WWWW  JOGO DE ADIVINHACAO!!!  \n");
	printf("|'  WWWW'|I_I|'WWWW'  |                             \n");
	printf("|   |' |/  -  \\|' |'  |                            \n");
	printf("|'  |  |LI=H=LI|' |   |                             \n");
	printf("|   |' | |[_]| |  |'  |                             \n");
	printf("|   |  |_|###|_|  |   |                             \n");
	printf("'---'--'-/___\\-'--'---'                            \n");
	printf("\n\n\n");
    //Retorna o número de segundos passados desde 1º de janeiro de 1970.
	int segundos = time(0);
	//Define a semente do gerador de números aleatórios para garantir sequências diferentes a cada execução.
	srand(segundos);
    //A função rand gera um número aleatório entre 0 e o máximo definido pela implementação.
	int n1 = rand();
	//Limita o número aleatório gerado para um intervalo entre 0 e 100.
	int numerosecreto = n1 % 100;
	int chute;
	int tentativas = 1;
	double pontos = 1000;
	int acertou = 0;
	int numerodetentativas;
	int nivel;
    //Seleciona o nível de dificuldade.
	printf("Qual é o nível de dificuldade?\n");
	printf("1 - Fácil 2 - Medio 3 - Difícil\n\n");
	printf("Escolha: ");
	scanf("%d", &nivel);

	switch(nivel) {
		case 1:
			numerodetentativas = 20;
			break;
		case 2:
			numerodetentativas = 15;
			break;
		default:
			numerodetentativas = 6;
			break;
	}
    //Vai executar o programa enquanto houverem tentativas restando.
	for(int i = 1; i <= numerodetentativas; i++) {

		printf("Tentativa %d\n", tentativas);
		printf("Advinhe o número entre 1 e 100!!!\n");
		printf("Qual é o seu chute? ");

		scanf("%d", &chute);
		printf("Seu chute foi %d\n", chute);

		if(chute < 0) {
			printf("Voce não pode chutar números negativos!\n");
			continue;
		}

		acertou = (chute == numerosecreto);
		int maior = chute > numerosecreto;

		if(acertou) {
			break;
		}
		else if(maior) {
			printf("O número secreto é menor.\n");
		}


		else {
			printf("O número secreto é maior.\n");
		}

		tentativas++;

		double pontosperdidos = abs(chute - numerosecreto) / (double)2;
		pontos = pontos - pontosperdidos;
	}

	printf("Fim de jogo!\n");
	//Mensagem exibida em caso de vitória.
	if(acertou) {
		printf("\n\n\n");
		printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$'               `$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
                printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$'                   `$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
                printf("$$$'`$$$$$$$$$$$$$'`$$$$$$!                       !$$$$$$'`$$$$$$$$$$$$$'`$$$\n");
                printf("$$$$  $$$$$$$$$$$  $$$$$$$                         $$$$$$$  $$$$$$$$$$$  $$$$\n");
                printf("$$$$' `$' \\' \\$`  $$$$$$$!                         !$$$$$$$  '$/ `/ `$' '$$$$       VOCE GANHOU!!!\n");
                printf("$$$$$' !\\  i  i '$$$$$$$$                           $$$$$$$$' i  i  /! '$$$$$ ACERTOU EM %d TENTATIVAS.\n", tentativas);
                printf("$$$$$$   `--`--'$$$$$$$$$                           $$$$$$$$$'--'--'   $$$$$$  SUA PONTUACAO EH: %2.f\n", pontos);
                printf("$$$$$$L        `$$$$$^^$$                           $$^^$$$$$'        J$$$$$$\n");
                printf("$$$$$$$'   ''   ''~   $$$    $'                 '$  $$$   ~''   `'   '$$$$$$$\n");
                printf("$$$$$$$$'  ;      'e$$$$$!    $$'             '$$  !$$$$$e'      ;  '$$$$$$$$\n");
                printf("$$$$$$$$$   `'$$$$$$$$$$$$     $$$'         '$$$   $$$$$$$$$$$$''   $$$$$$$$$\n");
                printf("$$$$$$$$    '$$$$$$$$$$$$$!     $$`$$$$$$$$'$$    !$$$$$$$$$$$$$'    $$$$$$$$\n");
                printf("$JT&yd$     $$$$$$$$$$$$$$$$'    $    $$    $   '$$$$$$$$$$$$$$$$     $by&TL$\n");
                printf("                                 $    $$    $                                \n");
                printf("                                 $'   $$   '$                                \n");
                printf("                                 `$        $'                                \n");
                printf("                                  `$$$$$$$$'                                 \n");
		printf("\n\n\n");
	} else {
	    //Mensagem exibida em caso de derrota.
		printf("\n\n\n");
		printf(" / ___|  / \\  |  \\/  | ____|  / _ \\ \\   / / ____|  _ \\                                       \n");
                printf("| |  _  / _ \\ | |\\/| |  _|   | | | \\ \\ / /|  _| | |_) |                 VOCE ERROU!           \n");
                printf("| |_| |/ ___ \\| |  | | |___  | |_| |\\ V / | |___|  _ <        MAS NAO DESANIME, TENTE NOVAMENTE.\n");
                printf(" \\____/_/   \\_\\_|  |_|_____|  \\___/  \\_/  |_____|_| \\_\\                                    \n");
		printf("\n\n\n");
	}

	return 0;
}
