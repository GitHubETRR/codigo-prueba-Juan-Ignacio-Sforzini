#include <stdio.h>

int main(){
   unsigned int horas, minutos, segundos, horas1, minutos1, segundos1;
   unsigned int totalsegundos, totalminutos, totalhoras;
   
   printf("Ingrese el primer horario a sumar en horas, minutos y segundos:\n ");
   scanf("%d:%d:%d", &horas, &minutos, &segundos);
   printf("Ingrese el segundo horario a sumar en horas, minutos y segundos:\n ");
   scanf("%d:%d:%d", &horas1, &minutos1, &segundos1);

   totalsegundos = segundos + segundos1;
   totalminutos = minutos + minutos1;
   totalhoras = horas + horas1;
   
    if(totalsegundos>59){
        totalminutos=totalminutos+1;
        totalsegundos=totalsegundos-60;
    }
    if(totalminutos>59){
        totalhoras=totalhoras+1;
        totalminutos=totalminutos-60;
    }
    printf("Su tiempo final es equivalente a: %d:%d:%d",totalhoras,totalminutos,totalsegundos);

    return 0;
}
