#include <stdio.h>
#include <math.h>

int tabla_de_multiplicar(void);

int main(){
    tabla_de_multiplicar();
}

int tabla_de_multiplicar(void){
    int Num, i;
    printf("Ingrese un numero del 1 al 10 para mostrar su tabla de multiplicar\n");
    scanf("%d", &Num);
    printf("La tabla de multiplicar del %d es: \n", Num);
    if (Num > 10 || Num < 0){
        printf("Valor invalido");
    }else{
        for (i=0; i<11; i++){
            printf("%d x %d = %d\n", Num, i, Num*i);
        }
    }
}
