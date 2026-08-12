/*
 * File: sommaCifreIntero.c
 * Scrivere un programma che legga un numero intero non negativo e calcoli la
 * somma delle sue cifre.
 */

#include <stdio.h>

int main() {
    int numero;
    int cifra;
    int somma = 0;

    do {
        printf("Inserisci un numero intero non negativo: ");
        scanf("%d", &numero);
        while (getchar() != '\n');
    } while (numero < 0);

    while (numero != 0) {
        cifra = numero % 10;
        somma += cifra;
        numero = numero / 10;
    }

    printf("La somma delle cifre e': %d\n", somma);

    return 0;
}