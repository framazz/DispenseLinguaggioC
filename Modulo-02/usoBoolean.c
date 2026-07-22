/*
 * File: usoBoolean.c
 * Leggere e scrivere una variabile di tipo bool
 */
#include <stdio.h>
#include <stdbool.h>

int main(void) {
    bool superato, maggiorenne = false;
    int valore;

    printf("Hai superato l'esame? [0 per no, altro per si']");
    scanf("%d", &valore);
    superato = valore;
    printf("Superato: %d\n", superato);    // Stampa 0/1 in base al valore
    
    // Cambio il valore di superato a true
    superato = true;

    printf("Superato: %d\n", superato);    // Stampa 1
    printf("Maggiorenne: %d\n", maggiorenne); // Stampa 0

    return 0;
}