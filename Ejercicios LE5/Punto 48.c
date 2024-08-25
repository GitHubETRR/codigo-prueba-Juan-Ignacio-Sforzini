#include <stdio.h>

int main(){
    int num, neg = 0, pos = 0;
    
    printf("Ingrese su numero.\n");
    scanf("%d", &num);
    
    while(num != 0){
        if(num > 0){
            pos++;
        }else{
            neg++;
        }
        printf("Ingrese otro número\n");
        scanf("%d", &num);
    }
    printf("Se han ingresaron %d numeros positivos y %d numeros negativos.", pos, neg);
    return 0;
}