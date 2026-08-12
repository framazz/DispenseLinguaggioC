/*
 * File: MCDEuclide.c
 * Scrivere un programma che legga due numeri interi positivi e calcoli il loro
 * Massimo Comune Divisore mediante l’algoritmo di Euclide
 */

#include <stdio.h>

int main() {
    int a, b, resto;

    do {
        printf("Inserisci il primo numero positivo: ");
        scanf("%d", &a);
        while (getchar() != '\n');
    } while (a <= 0);

    do {
        printf("Inserisci il secondo numero positivo: ");
        scanf("%d", &b);
        while (getchar() != '\n');
    } while (b <= 0);

    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }

    printf("Il Massimo Comune Divisore e': %d\n", a);

    return 0;
}