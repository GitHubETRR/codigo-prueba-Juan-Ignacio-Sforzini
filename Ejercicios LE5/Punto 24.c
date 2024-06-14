
#include <stdio.h>
#include <math.h>

int main()
{
    float R, H, V, A;
    printf("Ingrese el radio de su cilindro\n");
    scanf("%f", &R);
    printf("ingrese el valor de la altura de su cilindro\n");
    scanf("%f", &H);
    V = 3.1416*R*R*H;
    A = 3.1416*2*R*H+2*(R*R*3.1416);
    printf("el volumen de su cilindro es de %f y su area de %f", V, A);
    return 0;
}
