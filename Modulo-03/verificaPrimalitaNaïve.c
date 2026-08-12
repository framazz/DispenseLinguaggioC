/*
 * File: verificaPrimalitaNaïve.c
 * Verifica della primalità di un numero intero N positivo. Prima versione
 * Divisioni per i numeri da 2 a N-1. Se trovo un divisore, il numero non è primo
 */

#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int n; // Numero intero positivo
    int i; // Indice per il ciclo for
    bool primo = true; // Flag per la risposta

    // Chiedo N
    do {
        printf("Quale numero intero positivo vuoi verificare? ");
        scanf("%d", &n);
        while (getchar() != '\n'); // Pulizia del buffer
    } while (n <= 0);

    // Il numero 1 NON è primo
    if (n == 1) {
        primo = false;
    }

    for (i = 2; i <= n - 1; i++) {
        if (n % i == 0) {
            primo = false;
        }
    }

    if (primo) {
        printf("Il numero %d e' primo", n);
    } else {
        printf("Il numero %d non e' primo", n);
    }

    return 0;
}