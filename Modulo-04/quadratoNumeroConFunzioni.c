/*
 * File: quadratoNumeroConFunzioni.c
 * Calcola il quadrato di un numero e lo mostra. Versione con funzioni
 */
#include <stdio.h>

/**
 *
 * @param numero
 * @return
 */
int calcolaQuadrato(int numero);
void visualizzaRisultato(int numero, int quadrato);

int main(void) {
    int numero;
    int quadrato;

    printf("Inserisci un numero: ");
    scanf("%d", &numero);
    while (getchar() != '\n');
    quadrato = calcolaQuadrato(numero);
    visualizzaRisultato(numero, quadrato);

    return 0;
}

int calcolaQuadrato(int numero) {
    int quadrato;
    quadrato = numero * numero;
    return quadrato;
}

void visualizzaRisultato(int numero, int quadrato) {
    printf("Il quadrato di %d e' %d.\n", numero, quadrato);
}