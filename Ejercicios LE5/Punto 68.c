#include <stdio.h>
#include <math.h>

void datovalidado(int *, int, int);

int main() {
    int valor, mini = 10, maxi = 50;

    datovalidado(&valor, mini, maxi);

    printf("El valor validado es: %d\n", valor);

    return 0;
}

void datovalidado(int *dato, int min, int max) {
    printf("Ingrese un valor entre %d; %d: ", min, max);
    scanf("%d", dato);

    if (*dato < min || *dato > max) {
        printf("El valor que ah sido ingresado no está en el rango permitido.\n");
        datovalidado(dato, min, max);
    }
}
