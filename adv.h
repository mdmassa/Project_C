#include <windows.h>
#include <string.h>

void start(char* locate, char* date, char* part1){
	int i;
	
	system("cls");
	for(i=0; i<20; i++){
		printf("%c", locate[i]);
		Sleep(25);
	}
	printf("\n");
	
	for(i=0; i<24; i++){
		printf("%c", date[i]);
		Sleep(25);
	}
	printf("\n\n");
	Sleep(800);
	
	for(i=0; i<335; i++){
		printf("%c", part1[i]);
		Sleep(15);
	}
	getch();
	
void creation(char* name, int hp, int sanity, int str, int dex, int qi, int luck){
	printf("NOME: ");
	gets(name);
	
	printf("%s", name);
}

}
