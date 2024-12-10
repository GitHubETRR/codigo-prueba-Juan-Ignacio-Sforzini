
#include <stdio.h>
#include <math.h>

int main(){
    float cat1, cat2, h;
    
    printf("Introduzca las medidas de sus catetos\n");
    scanf("%f %f", &cat1, &cat2);
    h = sqrt(cat1*cat1+cat2*cat2);
    printf("La hipotenusa es %f", h);
    
    return 0;
}
