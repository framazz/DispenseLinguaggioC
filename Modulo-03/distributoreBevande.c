/*
 * File: distributoreBevande.c
 * Distributore di bevande: Si vuole simulare l’utilizzo della macchinetta del
 * caffè presente a scuola. Un utente può effettuare una scelta fra:
 * - inserimento importo da spendere in Euro
 * - erogazione di un caffè, che costa 50 centesimi
 * - erogazione di un the, che costa 45 centesimi
 * - erogazione di cappuccino, che costa 55 centesimi
 * - uscita, cioè termine delle operazioni ed erogazione dell’eventuale resto
 */

#include <stdio.h>

#define COSTO_CAFFE 0.5f
#define COSTO_THE 0.45f
#define COSTO_CAPPUCCINO 0.55f

int main(void) {
    float credito = 0.0f; // Importo disponibile da spendere
    float importo; // Importo inserito nella macchinetta
    int scelta; // Scelta del menu

    do {
        printf("\nSimulazione macchinetta del caffe': cosa si desidera fare?");
        printf("\n1) Inserire credito");
        printf("\n2) Erogare un caffe' (costo %.2f Euro)", COSTO_CAFFE);
        printf("\n3) Erogare un the (costo %.2f Euro)", COSTO_THE);
        printf("\n4) Erogare un cappuccino (costo %.2f Euro)", COSTO_CAPPUCCINO);
        printf("\n5) Terminare erogazione bevande ed erogare il resto");
        scanf("%d", &scelta);
        while (getchar() != '\n'); // Pulizia del buffer

        switch (scelta) {
            case 1: // Inserimento credito
                do {
                    printf("\nQuanti Euro si vogliono inserire: ");
                    scanf("%f", &importo);
                    while (getchar() != '\n'); // Pulizia del buffer
                } while (importo <= 0);
                credito += importo;
                printf("\nCredito disponibile: %.2f euro", credito);
                break;
            case 2: // Erogare caffè
                if (credito >= COSTO_CAFFE) {
                    credito -= COSTO_CAFFE;
                    printf("\nErogazione caffe' in corso");
                    printf("\nCredito residuo: %.2f", credito);
                } else {
                    printf("\nCredito insufficiente");
                }
                break;
            case 3: // Erogare the
                if (credito >= COSTO_THE) {
                    credito -= COSTO_THE;
                    printf("\nErogazione the in corso");
                    printf("\nCredito residuo: %.2f", credito);
                } else {
                    printf("\nCredito insufficiente");
                }
                break;
            case 4: // Erogare cappuccino
                if (credito >= COSTO_CAPPUCCINO) {
                    credito -= COSTO_CAPPUCCINO;
                    printf("\nErogazione cappuccino in corso");
                    printf("\nCredito residuo: %.2f", credito);
                } else {
                    printf("\nCredito insufficiente");
                }
                break;
            case 5: // Termine erogazione bevande ed erogazione resto
                printf("\nErogazione bevande terminata");
                if (credito > 0) {
                    printf("\nErogazione credito residuo: %.2f", credito);
                } else {
                    printf("\nCredito esaurito");
                }
                credito = 0;
                break;
            default:
                printf("\nScelta scorretta");
        }
    } while (scelta != 5);

    return 0;
}