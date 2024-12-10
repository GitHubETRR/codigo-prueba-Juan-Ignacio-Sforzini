#include <stdio.h>
#include <math.h>

int SumaIntervalo(void);

int main(){
    int result;
    result = SumaIntervalo();
    printf("El resultado de las sumas de todos los numeros entre los ingresados, es %d", result);
}

int SumaIntervalo(void){
    int num_1, num_2, res, suma=0;
    printf("Ingrese su primer numero: \n");
    scanf("%d", &num_1);
    printf("Ingrese su segundo numero: \n");
    scanf("%d", &num_2);
    do {
        suma+=num_1;
        num_1++;
    }while (num_1 <=num_2);

    return suma;
}