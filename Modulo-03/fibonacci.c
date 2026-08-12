/*
 * File: fibonacci.c
 * Successione di Fibonacci: F₁ = 0, F₂ = 1, Fₙ = Fₙ₋₁ + Fₙ₋₂
 */
#include <stdio.h>

int main() {
    int n; // Numero di elementi della sequenza da visualizzare
    int f1 = 0; // Primo numero e precedente di f2, corrispondente a Fₙ₋₂
    int f2 = 1; // Secondo numero e precedente di fn, corrispondente a Fₙ₋₁
    int fn; // N-esimo numero della sequenza
    int i; // Indice per il ciclo for

    // Chiedo quanti numeri si vogliono generare
    do {
        printf("Quanti numeri della sequenza si desidera generare? ");
        scanf("%d", &n);
        while (getchar() != '\n');
    } while (n <= 0);
    
    // Mostro il primo (ha un valore già noto)
    printf("%d ", f1);
    
    if (n >= 2) {
        // Mostro il secondo (ha un valore già noto)
        printf("%d ", f2);

        // Ciclo for che calcola e stampa i numeri successivi al secondo
        // NB: i deve partire da 3 perché i primi due numeri li ho già stampati
        for (i = 3; i <= n; i++) {
            fn = f2 + f1; // Applico la definizione e calcolo il nuovo valore
            printf("%d ", fn); // Mostro il numero calcolato

            // Per calcolare il numero successivo ora devo memorizzare in f1 il 
            // precedente del numero che ho appena calcolato cioè f2 e in f2 il
            // numero appena calcolato. Attenzione a non invertire l’ordine!
            f1 = f2;
            f2 = fn;
        }
    }

    return 0;
}