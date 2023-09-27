#include <stdio.h>

int main() {
    int numero, soma = 0;

    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("%d eh par\n", numero);
    } else {
        printf("%d eh impar\n", numero);
    }

    int temp = numero;
    while (temp != 0) {
        int digito = temp % 10;
        soma += digito;
        temp /= 10;
    }

    printf("A soma dos algarismos de %d eh %d\n", numero, soma);

    return 0;
}
