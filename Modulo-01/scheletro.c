/*
 * Cognome e Nome, Classe, Data
 * Commento che riporta per intero il testo del problema, ad esempio:
 * Calcolare il perimetro di un quadrato, data la misura del lato.
 */

// Inclusione delle librerie
#include <stdio.h>

// Definizione delle costanti
#define NUM_LATI 4 // Numero di lati in un quadrato

// Funzione main, punto d’ingresso del programma
int main(void) {
    // Dichiarazione delle variabili
    float lato, perim;

    // Richiesta di input all’utente
    printf("Inserire la misura del lato\n");
    scanf("%f", &lato);

    // Esecuzione dei calcoli
    perim = lato * NUM_LATI;

    // Output del risultato
    printf("Il perimetro di un quadrato di lato %.2f vale %.2f", lato, perim);

    // Il programma termina senza errori
    return 0;
}