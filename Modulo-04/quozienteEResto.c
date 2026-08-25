/*
 * File: quozienteEResto.c
 * Esempio di funzione che restituisce due valori tramite puntatori
 */

#include <stdio.h>

/**
 * Dati un dividendo e un divisore, ne calcola quoziente e resto
 * @param divid Dividendo
 * @param divis Divisore
 * @param q Puntatore al quoziente
 * @param r Puntatore al resto
 */
void calcolaQuozienteResto(int divid, int divis, int *q, int *r);

int main(void) {
    int dividendo, divisore, quoziente, resto;
    printf("Dividendo: ");
    scanf("%d", &dividendo);
    while (getchar() != '\n');

    do {
        printf("Divisore non nullo: ");
        scanf("%d", &divisore);
        while (getchar() != '\n');
    } while (divisore == 0);

    calcolaQuozienteResto(dividendo, divisore, &quoziente, &resto);
    printf("Quoziente: %d, resto: %d\n", quoziente, resto);

    return 0;
}

void calcolaQuozienteResto(int divid, int divis, int *q, int *r) {
    *q = divid / divis;
    *r = divid % divis;
}