
#include <stdio.h>

int main()
{ 
    int Year;
    printf("bienvenido al programa para calcular sus dias de vida, ingrese su edad\n");
    scanf("%d", &Year);
    int D = 365*Year;
    printf("Viviste %d dias", D);
    return 0;
}
