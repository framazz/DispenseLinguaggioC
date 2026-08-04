/*
 * File: ammissione.c
 * Determinare il superamento di una prova in base al punteggio (0-100)
 */
#include <stdio.h>

int main(void) {
    int punteggio;
    int retVal = 0; // Valore di ritorno del main. Supponiamo tutto OK

    printf("Inserisci il punteggio ottenuto (0-100): ");
    scanf("%d", &punteggio);

    if (punteggio < 0 || punteggio > 100) {
        printf("Errore: Punteggio non valido! Deve essere compreso tra 0 e 100.\n");
        retVal = 1; // Un numero != 0 indica che c’è stato un ERRORE
    } else {
        if (punteggio >= 60) {
            printf("Esito: PROVA SUPERATA.\n");
        } else {
            printf("Esito: PROVA NON SUPERATA.\n");
        }
    }

    return retVal;
}