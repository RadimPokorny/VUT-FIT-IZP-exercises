#include <stdio.h>

int main(void){


    int pocatecniHmota;
    int startTachometr;
    int konecnyTachometr;
    int konecnaHmota;

    scanf("%i", &pocatecniHmota);

    scanf("%i", &startTachometr);

    scanf("%i", &konecnyTachometr);

    scanf("%i", &konecnaHmota);

    int vzdalenost = konecnyTachometr - startTachometr;
    float spotreba = ((konecnaHmota - pocatecniHmota) / (float)vzdalenost)* 100;

    printf("Spotřeba je %il/100km/h", spotreba);





    return 0;
}