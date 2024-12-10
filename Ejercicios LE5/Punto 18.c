
    
#include <stdio.h>
#include <math.h>
float R, area;
float const Pi = 3.14;

int main(){
    printf("bienvenido al programa para calcular el area de un circulo\n");
    printf("ingrese el area de su circulo\n");
    scanf ("%f", &R);
    area = (R*R*Pi);
    printf("el area del su circulo es: %f", area);


    return 0;
}
