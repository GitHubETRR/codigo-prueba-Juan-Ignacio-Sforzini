#include <math.h>
#include <stdio.h>

int main()
{
    float lado1, lado2, lado3, s, area;
    printf("Ingrese su primer lado\n");
    scanf("%f", &lado1);
    printf("ingrese su segundo lado\n");
    scanf("%f", &lado2);
    printf("ingrese su tercer lado\n");
    scanf("%f", &lado3);
    s = (lado1+lado2+lado3)/2;
    area = sqrt(s*(s-lado1)*(s-lado2)*(s-lado3));
    printf("su area es %f", area);
    return 0;
    
}
