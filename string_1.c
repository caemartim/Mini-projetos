#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()

{
	char frase [30], carac=0;
	int x, cont=0, tam;
	
		printf ("\ndigite uma frase:");
		gets(frase);
		printf ("\ndigite um caracter:");
		scanf("%c", &carac);
		tam= strlen(frase);
		for(x=0;x < strlen(frase);x++)
	{
		if (frase[x]==carac)
		{
		   cont++;
		}

	}		
			printf(" o caracter apareceu %d vezes", cont);
