//Mila Gallegos 

#include <stdio.h>

int main() {
    int num1, num2;

    // Solicitar los dos números al usuario
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    // Verificar si uno es divisor del otro
    if (num1 % num2 == 0) {
        printf("%d es divisor de %d\n", num2, num1);
    } else if (num2 % num1 == 0) {
        printf("%d es divisor de %d\n", num1, num2);
    } else {
        printf("Ningún número es divisor del otro.\n");
    }

    return 0;
}
