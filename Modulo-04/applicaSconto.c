/*
 * File: applicaSconto.c
 * La funzione applicaSconto ha un parametro di input/output e uno di input
 */

#include <stdio.h>

/**
 * Applica lo sconto espresso da percentuale al prezzo
 * @param prezzo Puntatore al prezzo, che viene prima letto, poi modificato
 * @param percentuale Percentuale di sconto da applicare (compresa fra 0 e 1)
 */
void applicaSconto(float *prezzo, float percentuale);


int main(void) {
    // Valori pre-impostati per semplicità
    float pre = 150.50, perc = 0.3;

    printf("Prezzo iniziale: %.2f Euro\n", pre);
    printf("Sconto %.2f%%\n", perc * 100);

    // chiamata
    applicaSconto(&pre, perc);

    // Visualizzazione dell'effetti dell'invocazione
    printf("Prezzo finale: %.2f Euro\n", pre);

    return 0;
}


void applicaSconto(float *prezzo, float percentuale) {
    *prezzo *= 1 - percentuale;
}