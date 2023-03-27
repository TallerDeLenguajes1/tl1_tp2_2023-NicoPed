#include <stdio.h>
#include <stdlib.h>

#define N 5
#define M 7

int main(){
    int mt[N][M];
    //int *punteroArreglo[N][M] = &mt;
    int *pArreglo = &mt[0][0];
    int contN=0;
    while (contN < N * M)
    {
        *(pArreglo + contN) = 1 + rand()%100;
        printf("%d ", *(pArreglo + contN));
        if ((contN+1) % M == 0)
        {
        printf("\n");   
        }
        contN ++;
    }
    
}