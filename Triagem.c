#include<stdio.h>
#include<windows.h>

int main (){
	SetConsoleOutputCP(CP_UTF8);
	char pedido, tipo;
	int senha=0;
	do{
	    printf("Possui pedido de exame? s/n: ");
	    scanf(" %c", &pedido);
	    if(pedido == 's'){
	    	senha++;
	    	printf("Sua senha é %d\n\n", senha);
	    	printf("Qual o tipo de exame?\n");
	    	printf("a = Admissional\n");
	    	printf("d = Demissional\n");
	    	printf("p = Periódico\n");
	    	printf("o = Outro\n");
	    	scanf(" %c", &tipo);
	    	if(tipo =='a') printf("encaminhe-se para a sala 1\n");
	    	else if(tipo =='d') printf("encaminhe-se para a sala 2\n");
	    	else if(tipo =='p') printf("encaminhe-se para a sala 3\n");
	    	else printf("encaminhe-se a sala 4\n");
		}
	}while(pedido == 's');
	printf("Volte para a sua empresa");
	getch();
}