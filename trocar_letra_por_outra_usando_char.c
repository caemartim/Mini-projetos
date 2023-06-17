#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main ()
 {
	char frase [50];
  	int x=0;

	printf ("informe uma frase:");
	gets(frase);
	
	for(x=0;x<strlen(frase);x++)
	{ 
		if(frase[x]=='a')
		{
		frase[x] = 'o'; }
		
	}
	
	printf("\n a sua frase trocada ficou: %s", frase);
