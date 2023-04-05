#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float altura, peso, imc;
	imc=0;
	
	printf ("qual a sua altura?");
	scanf  ("%f", &altura);
	
	printf("qual o seu peso?");
	scanf("%f", &peso);
	
	imc= peso / (altura*altura);
	printf ("seu peso ideal e: %f", imc);
	
	  if (imc < 18.5){
	 	printf("Voce esta abaixo do peso");}
	 	
	 	else if ( imc <25)
		    {
	 	 	printf ("voce esta no peso normal");
		  }
		  
	    else if (imc <30 ) 
		  	{	printf ("voce esta acima do peso");
			  }
		else
		{
			printf ("voce esta obeso");
