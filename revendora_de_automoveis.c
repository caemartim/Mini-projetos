#include <stdio.h>
#include <stdlib.h>

int main()
{
    int modelocarro[5], mc, x;
    int valorcarro[5], vc;
    int picapes=0 , suv=0, somasuv, popular=0;
    float mediasuvs, porcentpop;
    int valoresportivo[5], ve;
   
    printf ( "\nInforme os carros:\n");
    
    for (x=1; x <= 5; x++)
    {
    printf ("\nCARRO %d", x); 
   
    printf ("\nSelecione um modelo de carro: \n 1- Popular\n 2- Esportivo\n 3- Picape\n 4- suv\n");
        scanf ("%d",&modelocarro[mc]);
    
    printf ("\nO valor do carro:");
        scanf("%d", &valorcarro[vc]);
   
         if (modelocarro[mc] == 3) 
        { 
            picapes++; //vai adicionando +1 em picapes cada vez que a variavel for igual a 3
        } 
        
            if (modelocarro[mc] == 4 ) 
            {
                suv++;
                somasuv += valorcarro[vc]; //a somasuv vai ficar recebendo os valores do carro 
            } 
            
                 if (modelocarro[mc] == 1) 
                 { 
                    popular++;
                    } 
                        
                    if (modelocarro[mc]== 2 ){
                        
                        valoresportivo [ve] = valorcarro [ve];
                    }    
    }
            printf("\nA quantidade de picapes e: %d \n", picapes); //impressao
            
            printf("\nA quantidade de suvs e: %d \n", suv);//impressao
            
            printf("\nA quantidade de popular e: %d \n", popular);//impressao
       
           mediasuvs = somasuv / suv; // calculo para a media do valor dos suvs
        printf ("\nO valor medio dos suvs e: %.2f", mediasuvs);
       
         porcentpop= popular / modelocarro[mc] ;
        printf("\nA procentagem de populares e:%.2f%%", porcentpop);   
        
        for (x=1; x < valoresportivo[ve]; x++) 
        { printf ("\nO valor dos Esportivos sao:%d ", valoresportivo[ve]); 
        }
