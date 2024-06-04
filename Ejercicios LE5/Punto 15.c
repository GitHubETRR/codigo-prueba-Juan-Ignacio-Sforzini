
#include <stdio.h>

int main()
{
    float lado1, lado2, perimetro, area;
    printf("ingrese el primer lado de su rectangulo\n");
    scanf("%f", &lado1);
    printf("ingrese el segundo lado de su rectangulo\n");
    scanf("%f", &lado2);
    area = lado1*lado2;
    perimetro = lado1*2+lado2*2;
    printf("El perimetro de su rectangulo es %f\n", perimetro);
    printf("el area de su rectangulo es de %f\n", area);
    return 0;
}
