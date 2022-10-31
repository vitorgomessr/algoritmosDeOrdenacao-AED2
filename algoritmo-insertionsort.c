 #include <stdio.h>
#include "laboratorio1.h"


void insertionsort(int *v, int n)
{
    int i, j;
    int aux;
    for(i = 1; i < n; i++)
    {
        aux = v[i];
        j = i - 1;
        while((j >= 0) && (aux < v[j])) {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = aux;
    }
}
