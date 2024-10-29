#include <stdio.h>
#include <math.h>

void maxmin(int x1, int x2, int* maxi, int* mini) {
    if (x1 > x2) {
        *maxi = x1;
        *mini = x2;
    } else {
        *maxi = x2;
        *mini = x1;
    }
}

int main() {
    int a, b, maxi, mini;
    printf("Ingrese dos números: ");
    scanf("%d %d", &a, &b);
    maxmin(a, b, &maxi, &mini);
    printf("El mayor es: %d\n", maxi);
    printf("El menor es: %d\n", mini);
    return 0;
}