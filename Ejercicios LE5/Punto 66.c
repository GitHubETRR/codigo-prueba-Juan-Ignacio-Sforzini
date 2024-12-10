#include <stdio.h>
#include <math.h>

void FechaValida(int, int, int);

int main(){
    int dia, mes, año;
    printf("Introduce una fecha en formato día mes año\n");
    scanf("%d %d %d", &dia, &mes, &año);
    FechaValida(dia, mes, año);
    return 0;
}

void FechaValida(int dia, int mes, int año){
    if(dia > 31 || mes > 12 || año < 0){
        printf("Fecha no válida");
    }else if (mes == 2 && dia == 30 || mes == 4 && dia == 31 || mes == 6 && dia == 31 || mes == 9 && dia == 31 || mes == 11 && dia == 31){
        printf("Fecha no válida");
    }else if(dia == 29 && mes == 2){
        if (año % 4 == 0){
            printf("Correcta");
        }else{
            printf("Fecha no válida");
        }
    }else{
        printf("Correcta");
    }
}