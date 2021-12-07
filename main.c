#include <stdio.h>
#include <stdlib.h>
#include "tablice.h"

int main()
{

    const int rozmiarTablicy = 10;
    int * tablica = stworzTabCal(rozmiarTablicy);

    inicjujTabCal(tablica, rozmiarTablicy);
    printf("%d\n", tablica[rozmiarTablicy-1]);


    zwolnijTabCal(tablica);


    return 0;
}
