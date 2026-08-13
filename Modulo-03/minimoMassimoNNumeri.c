/*
 * File: minimoMassimoNNumeri
 * Minimo e massimo di una sequenza di N numeri interi
 */

#include <stdio.h>

int main(void) {
    int n; // Numero di elementi della sequenza
    int i; // Contatore per il ciclo for
    int num; // Numero della sequenza
    int min, max; // Valori minimo e massimo

    // Chiedo il numero di elementi
    do {
        printf("Quanti elementi ci sono nella sequenza? ");
        scanf("%d", &n);
        while (getchar() != '\n'); // Pulizia del buffer
    } while (n <= 0);

    // Richiesta del primo numero e inizializzazione di min e max
    printf("Inserisci il 1 numero: ");
    scanf("%d", &min);
    while (getchar() != '\n'); // Pulizia del buffer
    max = min;

    // Ciclo per immissione dei numeri successivi al primo
    for (i = 2; i <= n; i++) {
        printf("Inserisci il %d numero: ", i);
        scanf("%d", &num);
        while (getchar() != '\n'); // Pulizia del buffer

        // Controllo se devo aggiornare il minimo
        if (num < min) {
            min = num;
        }

        // Controllo se devo aggiornare il massimo
        if (num > max) {
            max = num;
        }
    }

    printf("\nIl valore minimo e' %d\n", min);
    printf("\nIl valore massimo e' %d\n", max);

    return 0;
}