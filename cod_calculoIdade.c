#include <stdio.h>
#include <stdlib.h>

int main () {
	int idade, ano;
	idade= 0;
	ano= 0;
	
	printf("digite seu ano de nascimento:");
	scanf("%d", &ano);
	idade = 2023 - ano;
	
	if (idade >=18)
	{
		printf ("voce pode dirigir e votar.");
	}
	else if(idade>=16){
	
		printf("voce pode votar");
	}
	else	{
		printf("voce nao pode votar e nem tirar cnh");
	}
