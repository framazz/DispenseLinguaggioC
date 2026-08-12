/*
 * File: stampaNNumeri.c
 * Stampa i numeri da 1 a N
 */

#include <stdio.h>
#define N 5

int main(void) {
    int i; // Contatore del ciclo
    for (i = 1; i <= N; i++) {
        printf("%d\n", i);
    }

    return 0;
}