#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "laboratorio1.h"

int particao(int v[],int esq,int dir);
void troca(int v[], int i, int j);


void quicksort(int v[], int esq, int dir)
{
     int i;
     if(esq>=dir) return ;
     i=particao(v,esq,dir);
     quicksort(v,esq,i-1);
     quicksort(v,i+1,dir);
}

int particao(int v[],int esq,int dir)
{
 int i, fim;
 fim=esq;                           // fim = 0
 for(i=esq+1;i<=dir;i++)            // i=1 ; i<=6; i++
    if(v[i]<v[esq]) {               // v[1] < v[0]
        fim=fim+1;                  //      => fim++ => fim=1
        troca(v,fim,i);             //
    }
 troca(v,esq,fim);
 return fim;
}

void troca(int v[], int j, int i)       // (v, 1, 1)
{
     int temp;
     temp=v[j];
     v[j]=v[i];
     v[i]=temp;
}
/*#define N 7
int main()
{
    srand(time(NULL));
    int i,a[N];
    for(i=0; i<N; i++) a[i]=rand()%100;
    for(i=0; i<N; i++) printf("%d ",a[i]);
    quicksort(a,0,N-1);
    printf("\n Ordenado:\n");
    for(i=0; i<N; i++) printf("%d ",a[i]);
    printf("\n");

    return 0;
}*/
