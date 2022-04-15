#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include "adv.h"

//BASICS
	char name;
	int hp, sanity, str, dex, qi, luck;
main(){
/* ------ CHARACTER SHEET ------ */
	
//MISC
	int op;
	int i;
	
	setlocale(LC_ALL, "Portuguese");
	
	char title[57] = "Sozinho nas Chamas - O Chamado de Cthulhu\nH.P. Lovecraft";
	char cthulhu[1717] = "           B.                         vB          \n          BRi                         KRB         \n          RB            rPi            BR         \n         RB         7RBRBRBRBZr        :Bb        \n         BR      rRBRBRBRBRBRBRBR.      RB        \n        BRB      RBRBRBRBRBRBRBRBR      BRB       \n       KRBR     RBRBRBRBRBRBRBRBRBj     RBRi      \n       RBRB     BRBRBRBRBRBRBRBRBRB     BRBR      \n      RBRBR    BRBRBRBRBRBRBRBRBRBRB    RBRBR     \n     RBRBRB   BRBRBRBRBRBRBRBRBRBRBRI  .BRBRBR    \n    RBRBRBRB  bBRBRBRBRBRBRBRBRBRBRB7  BRBRBRBR   \n   RBRBRBRBR7  RBRBRBRBRBRBRBRBRBRBR  ERBRBRBRBD  \n  PBRBRBRBRBR7 BRBRBRBRBRBRBRBRBRBRB KRBRBRBRBRBr \n  BRBRBRBRBRBRBRBRBRBRBRBRBRBRBRBRBRBRBRBRBRBRBRB \n BRBRBRBRBRBRBRBRBR: URBRBRBRb vRBRBRBRBRBRBRBRBRB\n RBRBRBRBRBRBRBRBRBRY dRBRBRd 1RBRBRBRBRBRBRBRBRBR\nMBRBRBRBRBRBRBRBRBRBRBRBRBRBRBRBRBRBRBRBRBRBRBRBRB\nBRBRBRBRBRBRBRBRBRBRBRBRBRBRBRBRBRBRBRBRBRBRBRBRBR\nRBRBRBRBRBRR:::BRBRBRBRBRBRBRBRBRBRg::iBRBRBRBRBRB\nBRBRBRBRBD     gBRBRBRBRBRBRBRBRBRBJ     RBRBRBRBR\nRBRBRBRBR     iBRBRBRBRBRBRBRBRBRBRB      RBRBRBRB\nPRBRBRBRB     BRBR  BRBR: iRBRB  RBRB     BRBRBRBR\n BRBRBs7.     RBR   RBR:   7RBR   RBR     :7IBRBRB\n RBRB     Bq  BRB   BRB     BRB   BRB  RB     BRBR\n 1RBR    BR.   BRi  RBR     RBR  5RB   iRB    RBR \n  BRr   YR:    RB   BRB     BRB   BR    IR.   PRB \n  gB.    BR  iRBR   RBR     RBR   RBR.  RB    7Bv \n   Rv    .BRBRBi    sRB    .BR.    YBRBRB     gR  \n                     BRg   BRB                    \n                B:   rBR   RB    1B               \n                RB    RB   BR    BR               \n                PRB  .BR   RB   BRr               \n                 .RBRBR     RBRBR                 \n";
	char locate[20] = "Londres, Inglaterra";
	char date[24] = "12 de dezembro de 1920.";
	
//TEXT
	char part1[335] = "O sol está alto no céu, uma bola de fogo implacável. Você se sente tostado quando chega ao ponto de ônibus\nem frente à Drogaria do Osborn. É um alívio largar suas pesadas malas no chão e tirar o chapéu por um momento. \nVocê abana o rosto. Tem sido um longo verão na sua cidade natal e, ainda assim, um verão curiosamente vazio.";
	
//IMAGES
	
	
/* ------ INTRO ------ */
	
	system("color 0a");
	for(i=0; i<57; i++){
		printf("%c", title[i]);
		Sleep(25);
	}
	
	printf("\n\n");
	
	for(i=0; i<1717; i++){
		printf("%c", cthulhu[i]);
		Sleep1);
	}
	
	printf("\n\n");
	//system("pause");
	
	printf("Pressione qualquer tecla para continuar...");
	getch();
	system("cls");
	
	//do {
		printf("_______________________________\n            MENU\n_______________________________\n\n");
	
		printf("1 - CRIAÇÃO\n2 - COMEÇAR\n");
	
		printf("\n");
		scanf("%d", &op);
	
		switch(op) {
			case 1 :
		//		creation(name, hp, sanity, str, dex, qi, luck);
				break;
		
			case 2 :
				start(locate, date, part1);
				break;
		}
	//} while(loop=1)

}
