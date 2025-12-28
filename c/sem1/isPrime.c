//Números primos são números inteiros maiores que 1 e têm apenas dois divisores distintos: 1 e eles mesmos. Escreva um programa em C que descubra qual seria o 100º número primo.
#include <stdio.h>

int main() {
    int count = 0;      // quantidade de números primos encontrados
    int num = 2;        // número a ser testado
    int i;
    int isPrime;

    while (count < 100) {
        isPrime = 1;
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            count++;
        }

        num++;
    }

    printf("O 100º número primo é: %d\n", num - 1);

    return 0;
}

