/*
 * File: numeroPrimo
 * Valuta se un numero immesso è primo, tramite l'uso di funzioni
 */

#include <stdio.h>

/**
 * Chiede in input un numero positivo
 * @return Il numero positivo immesso
 */
int leggiNumeroPositivo(void);

/**
 * Valuta se il numero immesso è o meno primo
 * @param numero Il numero da valutare
 * @return 1 se il numero è primo, 0 altrimenti
 */
int numeroPrimo(int numero);

int main(void) {
    int numero, primo;
    numero = leggiNumeroPositivo();
    primo = numeroPrimo(numero);

    if (primo) {
        printf("%d e' primo.\n", numero);
    } else {
        printf("%d non e' primo.\n", numero);
    }

    return 0;
}

int leggiNumeroPositivo(void) {
    int numero;

    do {
        printf("Numero positivo: ");
        scanf("%d", &numero);
        while (getchar() != '\n');
    } while (numero <= 0);

    return numero;
}

int numeroPrimo(int numero) {
    int primo = 1;
    int divisore = 2;
    if (numero < 2) {
        primo = 0;
    }
    while (divisore * divisore <= numero && primo) {
        if (numero % divisore == 0) {
            primo = 0;
        }
        divisore++;
    }
    return primo;
}