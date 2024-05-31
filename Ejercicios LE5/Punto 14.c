
#include <stdio.h>

int main()
{
    float Ang1, Ang2, Ang3;
    printf("ingrese el valor de su primer angulo\n");
    scanf("%f", &Ang1);
    printf("Ahora ingrese el valor de su segundo angulo\n");
    scanf("%f", &Ang2);
    Ang3 = 180-Ang1-Ang2;
    if(0<Ang1+Ang2 & 180>Ang1+Ang2){
        printf("Su angulo restante es de %f grados", Ang3);
    }else{
        printf("Error, sus angulos no son aptos para un triangulo");
    }
    return 0;
}
