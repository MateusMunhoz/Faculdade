#include <stdio.h>

const float Pi = 3.14;



int main(){
    float R;
    printf("Insira o raio do circulo");
    scanf("%f", &R);

    if(R < 0){}
    
    float A = Pi * (R * R);
    printf("A area do circulo e igual a: %f", A);
}
