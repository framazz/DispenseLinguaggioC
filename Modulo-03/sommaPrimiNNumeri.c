/*
 * File: sommaPrimiNNumeri
 * Somma i primi N numeri interi
 */

#include <stdio.h>

int main(void) {
    int n; // Soglia superiore
    int i; // Contatore
    int somma = 0; // Accumulatore. NB: fondamentale inizializzarlo!

    do {
        printf("Inserisci N: ");
        scanf("%d", &n);
        while (getchar() != '\n');
    } while (n <= 0);

    for (i = 1; i <= n; i++) {
        somma += i;
    }

    printf("La somma dei primi %d numeri e' %d\n", n, somma);
    
    return 0;
}