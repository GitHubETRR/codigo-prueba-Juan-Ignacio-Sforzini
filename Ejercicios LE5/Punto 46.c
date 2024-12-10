#include <stdio.h>

int main(){
   int valor, D, res;
   
   printf("Ingrese su numero del 1 al 10 para mostrar su tabla de multiplicion\n");
   scanf("%d", &valor);
   if (valor > 10 || valor < 0){
       printf("Valor invalido");
   }else{
       for (D=0; D<11; D++){
          printf("%d x %d = %d\n", valor, D, valor*D);
   }
   }
   
}