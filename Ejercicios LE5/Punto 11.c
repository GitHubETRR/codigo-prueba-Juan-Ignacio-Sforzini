
#include <stdio.h>
#include <math.h>

int main()
{
    float cm;
    printf("Introduzca su medida en centimetros");
    scanf("%f", &cm);
    int Feet = cm/30.48;
    float Inches = cm/2.54;
    printf("su medida es: %d pies y %2.f pulgadas",Feet, Inches );
    return 0;
}
