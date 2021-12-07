#include <stdio.h>
#include <stdlib.h>
#ifndef TABLICE_H
#define TABLICE_H

// Tworzy nowa tablice liczb calkowitych
int * stworzTabCal(const int rozmiarTablicy)
{
    int * tablica = (int*) calloc(rozmiarTablicy, sizeof(int));
    return tablica;
}

// Inicjuje tablice liczb calkowitych
void inicjujTabCal(int * tablica, const int rozmiarTablicy)
{
    for (int indeks = 0; indeks < rozmiarTablicy; indeks++)
    {
        tablica[indeks] = 0;
    }
}

// Zwalnia miejsce po tablicy liczb calkowitych
const void zwolnijTabCal(int * tablica)
{
    free(tablica);
}

int * zmienRozmiarTabCal(int * tablica, const int nowyRozmiar)
{
    const int aktualnyRozmiarTablicy = sizeof(tablica);
    tablica = (int *) malloc(nowyRozmiar);
    return tablica;
}

#endif

