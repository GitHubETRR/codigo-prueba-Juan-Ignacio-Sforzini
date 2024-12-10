#include <stdio.h>
#include <math.h>

void multiplo(void);
void areaRectangulo(void);


int main(){
    int opc;
    printf("Presione 1 si quiere saber si un numero es multiplo de otro\n");
    printf("Presione 2 si quiere saber el area de un rectangulo\n");
    scanf("%d", &opc);
    
    switch(opc) {
        case 1:
        multiplo();
        break;
        
        case 2:
        areaRectangulo();
        break;
        
        default:
        break;
    }
}

void multiplo(){
    int num_1, num_2;
    printf("Usted seleccionó probar el multiplo de un numero\n");
    printf("Ingrese el numero mayor\n");
    scanf("%d", &num_1);
    printf("Ingrese el numero menor\n");
    scanf("%d", &num_2);
    if (num_1 % num_2 == 0){
        printf("El numero es multiplo");
    }else{
        printf("El numero no es multiplo");
    }
}

void areaRectangulo(){
    int bas, alt, area;
    printf("Ingrese la base de su rectangulo\n");
    scanf("%d", &bas);
    printf("Ingrese la altura de su rectangulo\n");
    scanf("%d", &alt);
    area = bas * alt;
    printf("El rectangulo tiene una base de %d", area);
}
