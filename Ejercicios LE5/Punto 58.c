#include <stdio.h>
#include <math.h>

int potencia(void);

int main(){
    int pot;
    pot = potencia();
    printf("El resultado de el numero entero indicado elevado a la potencia introducida es: %d", pot);
}

int potencia(void){
    int Y, X, pote;
    printf("Ingrese el valor entero a calcular su potencia\n");
    scanf("%d", &Y);
    printf("Ingrese la potencia\n");
    scanf("%d", &X);
    pote = pow(Y,X);
    return pote;
}