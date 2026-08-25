/*
 * File: potenzaConFunzioni.c
 * Calcola una potenza dati base ed esponente. Versione con funzioni
 */

#include <stdio.h>

/**
 * Chiede in input un numero intero non negativo
 * @return Un intero non negativo
 */
int leggiInteroNonNegativo(void);


/**
 * Calcola la potenza, dati la base e l'esponente.
 * @param base. La base della potenza
 * @param esponente. L'esponente della potenza. NB: deve essere non negativo.
 * @return La potenza calcolata
 */
int calcolaPotenza(int base, int esponente);

int main(void) {
    int base, esponente, potenza;
    printf("Base: ");
    scanf("%d", &base);
    while (getchar() != '\n');
    printf("Esponente: ");
    esponente = leggiInteroNonNegativo();
    potenza = calcolaPotenza(base, esponente);
    printf("%d elevato a %d vale %d.\n", base, esponente, potenza);

    return 0;
}

int leggiInteroNonNegativo(void) {
    int numero;
    do {
        printf("\nNumero intero non negativo: ");
        scanf("%d", &numero);
        while (getchar() != '\n');
    } while (numero < 0);
    return numero;
}

int calcolaPotenza(int base, int esponente) {
    int potenza = 1;
    int contatore;
    for (contatore = 0; contatore < esponente; contatore++) {
        potenza *= base;
    }
    return potenza;
}