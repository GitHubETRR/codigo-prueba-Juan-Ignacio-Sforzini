#include <stdio.h>
#include <math.h>

int main()
{
    float C, F;
    printf("Ingrese su temperatura en grados celsius\n");
    scanf("%f", &C);
    F = 32+C*1.8;
    printf("su temperatura en grados farenheit es %.2f\n",F);
    
    return 0;
}
