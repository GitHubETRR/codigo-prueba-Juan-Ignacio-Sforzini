#include <stdio.h>
#include <math.h>

int main(){
    int num=2,pot,D;
    for (D = 0;D <= 20; D++){
    pot = pow(num,D);
    printf("2^%d = %d \n",D,pot);
    }
    return 0;
}