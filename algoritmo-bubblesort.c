#include <stdio.h>
#include "laboratorio1.h"

void bubblesort(int num[], int n)
{
    /*int qtd;
    scanf("%d", &qtd);

    int num[100];


    while(i<qtd)
    {
        scanf("%d", &num[i]);
        i++;
    }*/
    int i = 0;
    int j = 0;

    int aux = 0;

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(num[i]>num[j])
            {
                aux = num[i];
                num[i] = num[j];
                num[j] = aux;
            }
        }
    }
    i = 0;

    /*while(i<qtd)
    {
        printf("%d\n", num[i]);
        i++;
    }*/
}
