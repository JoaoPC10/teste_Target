#include <stdio.h>

int pertence_fibonacci(int num) {
    int a = 0, b = 1, proximo;

    if (num == 0 || num == 1) {
        return 1;
    }
    while (b < num) {
        proximo = a + b;
        a = b;
        b = proximo;
    }

    return (b == num);
}

int main() {
    int numero;

    printf("Digite um número para verificar se pertence à sequência de Fibonacci: ");
    scanf("%d", &numero);

    if (pertence_fibonacci(numero)) {
        printf("O número %d pertence à sequência de Fibonacci.\n", numero);
    } else {
        printf("O número %d NÃO pertence à sequência de Fibonacci.\n", numero);
    }

    return 0;
}
