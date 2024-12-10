#include <math.h>
#include <stdio.h>

int main()
{
    float Area, Perimetro;
    printf("Introduzca el area de su cuadrado\n");
    scanf("%f", &Area);
    Perimetro = sqrt(Area)*4;
    printf("Su perimtro es %f", Perimetro);
    return 0;
}
