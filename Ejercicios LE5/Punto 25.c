#include <stdio.h>
#include <math.h>

int main(){
   float H, A, SN, S, P;
   
   printf("Ingrese la cantidad de horas realizadas\n");
   scanf("%f", &H);
   printf("Ingrese la antiguedad del trabajador:\n");
   scanf("%f", &A);
   
   S = H * 4500;
   P = (S/100)* 2 * A;
   SN = S + P;

   printf("El sueldo neto del trabajador es de %f", SN);

   return 0;
}