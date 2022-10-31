#include <stdio.h>
#include "laboratorio1.h"

void selectionsort(int v[], int tam){
int minimo, i, j, menor, troca=0, compara=0;

    for (i=0;i<tam-1;i++){
        minimo = i;
        for (j=i+1;j<tam;j++){
            compara++;
            if (v[j]<v[minimo])
                minimo = j;
        }
        troca++;
        menor = v[minimo];
        v[minimo] = v[i];
        v[i] = menor;
    }
}
