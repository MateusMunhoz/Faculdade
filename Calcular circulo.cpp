#include <stdio.h>

const float Pi = 3.14;



int main(){
    float R;
	int i;
    


	for(i = 0; i<3; i++){    //Sempre colocar i = 0 pq se n vai usar um valor aleatório da memória
		
		printf("Insira o raio do circulo \n ");
    	scanf("%f", &R);
    	
		if(R > 0){
			float A = Pi * (R * R);
			printf("A area do circulo e igual a: %f \n", A);
		}
		else{
			printf("%f eh menor do que 0, resultado invalido \n");
		}
	}
}
