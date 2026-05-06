#include <stdio.h>

int main() {
    int numero1, numero2;
    int dividendo, divisor;
    int quociente, resto;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    dividendo = numero1;
    divisor = numero2;
    quociente = 0;
    resto = dividendo;

    while (resto >= divisor) {
        quociente = quociente + 1;
        resto = resto - divisor;
    }

    printf("Quociente: %d\n", quociente);
    printf("Resto: %d\n", resto);
}
