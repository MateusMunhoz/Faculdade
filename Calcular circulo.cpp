#include <iostream>
const float Pi = 3.14;





    

//Sempre colocar i = 0 pq se n vai usar um valor aleatório da memória
		


int main(){
    float R;
    int i;
    int menu;
    int a,b;
    
    
    do{
    	printf("\n 1 - Somar \n 2 - Area do circulo \n 3 - Sair \n");
    	scanf("%d", &menu);
    
    
    	switch (menu)
    	{
    	
    	case 1:
    	{
	   	
        	printf("Insira os numeros que deseja somar separados por espaco \n");
        	scanf("%d %d", &a,&b);
        	printf("%d + %d = %d \n ", a,b, a+b);
			
			
        	break;
		}
		
    	case 2:
    	{
		
    		printf("Insira o valor do raio(0 para sair): \n");
    		scanf("%f", &R);
			float A = Pi * (R * R);
			printf("O valor da area do raio eh: %f \n", A);
		
		
        	break;
    	}
    	
    	case 3:
    	{
    		printf("Saindo do menu, paia \n");
    		break;
		}
		
		default:
			break;
    } 
    
	}while(menu < 3);
	
    
}
 
