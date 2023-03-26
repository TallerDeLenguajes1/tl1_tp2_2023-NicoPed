#include <stdio.h>
#include <stdlib.h>
#define N 20

int main(){

    int cont = 0;
    double vt[N];
    double *i;
    i = vt;
    while (cont < N)
    {
        *i = 1+rand()%100;
        printf("%.2f ",*i);
        i++;
        cont ++;
    }
    /*
    for( i = 0; i<N ; i++)
    {
        vt[i]=1+rand()%100;
        printf("%.2f ",vt[i]);
    }
    */

    return 0;
}