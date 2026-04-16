#include<stdio.h>
#include<windows.h>

int main (){
	SetConsoleOutputCP(CP_UTF8);
	    char nome[20], sexo, resposta='s';
	    int cont=0, m=0, f=0;
    	do{
    	printf("Qual seu nome? ");
    	scanf("%s", &nome);
	    printf("Qual o sexo 'm' ou 'f': ");
	    scanf(" %c", &sexo);
	    cont++;
	    printf("%s é o paciente número %d\n\n", nome, cont);
	    if(sexo == 'm') m++;
    	else if(sexo == 'f') f++;
    	printf("Mais algum paciente 's' ou 'n': ");
    	scanf(" %c", &resposta);
    }while (resposta=='s');
    printf("Hoje foram atendidos %d pacientes, %d do sexo masculino e %d do sexo feminino", cont, m, f);
	getch();
}