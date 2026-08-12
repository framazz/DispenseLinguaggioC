/*
 * File: incassoCinema.c
 * Un cinema dispone di N sale. Per ogni sala, leggi il numero di spettacoli
 * programmati nella giornata. Per ciascuno spettacolo, acquisisci il prezzo del
 * biglietto e il numero di biglietti venduti. Visualizza:
 * - l’incasso complessivo di ogni sala
 * - l’incasso totale del cinema;
 * - il numero della sala che ha realizzato l’incasso maggiore.
 */

#include <stdio.h>
int main (void) {
    int n; // Numero di sale
    int numSpettacoli; // Numero di spettacoli in una sala
    float prezzoBiglietto; // Prezzo del biglietto in €
    int numBiglietti; // Numero di biglietti in uno spettacolo
    float incassoSpettacolo;
    float incassoSala; // Incasso della sala
    float incassoTotale = 0.0f; // Incasso totale del cinema
    float incassoMaggiore = 0.0f;
    int numSalaMaggiore = 1; // Numero della sala con incasso maggiore
    int sala; // Indice per le sale
    int spettacolo; // Indice per gli spettacoli

    // Chiedo il numero delle sale
    do {
        printf("Quante sale ci sono nel cinema?\t");
        scanf("%d", &n);
        while (getchar() != '\n');
    } while (n <= 0);

    // Ciclo for che processa le sale
    for (sala = 1; sala <= n; sala++) {
        // Inizializzo l'incasso della sala
        incassoSala = 0.0f;

        // Chiedo il numero di spettacoli
        do {
            printf("Quanti spettacoli ci sono nella sala %d?\t", sala);
            scanf("%d", &numSpettacoli);
            while (getchar() != '\n');
        } while (numSpettacoli <= 0);

        // Ciclo che processa gli spettacoli
        for (spettacolo = 1; spettacolo <= numSpettacoli; spettacolo++) {
            // Chiedo il costo di un biglietto
            do {
                printf("\nQuanto costa un biglietto nella sala %d ", sala);
                printf(" per lo spettacolo %d\t", spettacolo);
                scanf("%f", &prezzoBiglietto);
                while (getchar() != '\n');
            } while (prezzoBiglietto <= 0);

            // Chiedo il numero di biglietti venduti
            do {
                printf("\nQuanti biglietti sono stati venduti per lo spettacolo"
                       " %d nella sala %d?\t", spettacolo, sala);
                scanf("%d", &numBiglietti);
                while (getchar() != '\n');
            } while (numBiglietti < 0);

            // Calcolo l'incasso per lo spettacolo
            incassoSpettacolo = prezzoBiglietto * numBiglietti;

            // Aggiungo l'incasso di questo spettacolo all'incasso della sala
            incassoSala += incassoSpettacolo;
        } // Fine del ciclo per gli spettacoli

        // Aggiungo l'incasso della sala all'incasso totale
        incassoTotale += incassoSala;

        // Mostro l'incasso della sala
        printf("\nIncasso sala %d: %.2f Euro", sala, incassoSala);

        // Controllo se l'incasso della sala attuale è il maggiore
        if (incassoSala > incassoMaggiore) {
            numSalaMaggiore = sala;
            incassoMaggiore = incassoSala;
        }
    } // Fine del ciclo per le sale

    // Al termine mostro l'incasso totale
    printf("\nIncasso totale del cinema: %.2f Euro", incassoTotale);

    // Mostro il numero della sala che ha realizzato l'incasso maggiore
    printf("\nLa sala con incasso maggiore e': %d", numSalaMaggiore);
    printf(", con un incasso di %.2f Euro.\n", incassoMaggiore);

    return 0;
}