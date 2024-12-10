#include <stdio.h>

int menu(void);

int main() {
    int opción;
    opción = menu();
    printf("Usted eligió la opción numero %d\n", opción);
}

int menu(void) {
    int opción;
    do {
        printf("Ingrese una opción del 1 al 4: ");
        scanf("%d", &opción);
        if (opción < 1 || opción > 4) {
            printf("La opción no es válida. Porfavor ingrese una opcion entre 1 y 4.\n");
        }
    } while (opción < 1 || opción > 4);
    
    return opción;
}