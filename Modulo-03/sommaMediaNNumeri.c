/*
 * File: sommaMediaNNumeri
 * Data una sequenza di N numeri interi, calcolarne la somma e il valore medio.
 */

#include <stdio.h>

int main(void) {
    int n; // Numero di elementi della sequenza
    int i; // Contatore per il ciclo for
    int num; // Numero della sequenza
    int somma = 0; // Accumulatore. NB: fondamentale inizializzarlo!
    float media; // Media dei numeri della sequenza

    // Chiedo il numero di elementi
    do {
        printf("Quanti elementi ci sono nella sequenza? ");
        scanf("%d", &n);
        while (getchar() != '\n'); // Pulizia del buffer
    } while (n <= 0);

    // Ciclo per immissione dei numeri e calcolo della somma
    for (i = 1; i <= n; i++) {
        printf("Inserisci il %d numero: ", i);
        scanf("%d", &num);
        while (getchar() != '\n'); // Pulizia del buffer
        somma += num;
    }

    // Calcolo la media, una sola volta finito il ciclo for
    media = (float)somma / n;

    printf("\nLa somma dei numeri immessi e' %d\n", somma);
    printf("\nLa media dei numeri immessi e' %.2f\n", media);

    return 0;
}