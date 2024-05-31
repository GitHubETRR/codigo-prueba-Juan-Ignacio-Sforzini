
#include <stdio.h>
#include <math.h>

int main()
{
    float Valor, Kg, Precio;
    printf("ingrese el valor de el kilogramo de mercaderia\n");
    scanf("%f", &Valor);
    printf("ahora ingrese la cantidad de la mercaderia en kilos\n");
    scanf("%f", &Kg);
    Precio = Valor*Kg;
    printf("su valor es %f pesos", Precio);
    return 0;
}
