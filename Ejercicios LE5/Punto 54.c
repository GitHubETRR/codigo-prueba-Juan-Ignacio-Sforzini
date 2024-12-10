#include <stdio.h>


#include <stdio.h>

int main(){
   int i, PRI, SEG;
   
   printf("Ingrese el primer numero (este debe ser menor al segundo)\n");
   scanf("%d", &PRI);
   
   printf("Ingrese el segundo numero\n");
   scanf("%d", &SEG);
   
   if (PRI > SEG){
       printf("Valores invalidos");
   }else{
       printf("Los numero enteros entre %d y %d son: \n", PRI, SEG);
       for(i=PRI+1; i <= SEG-1; i++) 
       printf("%d\n", i);
   }
   
   return 0;
}