/*
 * File: sommaSentinella.c
 * Sommare numeri inseriti dall'utente finché non inserisce un numero negativo (sentinella)
 */
#include <stdio.h>

int main(void) {
    int numero;
    int somma = 0;
    
    printf("Inserisci un numero intero (negativo per terminare): ");
    scanf("%d", &numero);
    
    while (numero >= 0) {
        somma += numero; // Accumulo
        printf("Inserisci un altro numero (negativo per terminare): ");
        scanf("%d", &numero); // Aggiornamento tramite lettura
    }
    
    printf("La somma totale dei numeri inseriti e': %d\n", somma);
    
    return 0;
}