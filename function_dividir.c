#include <stdio.h>

int dividir(int numero1, int numero2) 
{
    if (numero2 == 0) {
        printf("Erro: Divisão por zero!\n");
        return 0; 
    }

    int quociente = 0;
    int resto = numero1;

    while (resto >= numero2) 
    {
        quociente = quociente + 1;
        resto = resto - numero2;
    }

    return quociente;
}

int main() {
    int resultado = dividir(10, 2);
    printf("Resultado: %d\n", resultado);
    return 0;
}
