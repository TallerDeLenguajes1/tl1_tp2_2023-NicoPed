#include <stdio.h>
#include <stdlib.h>

#define NUMCOMPUS 5

struct compu {
int velocidad;//entre 1 y 3 GHz
int anio;//entre 2015 y 2023
int cantidad;//entre 1 y 8
char *tipo_cpu; //valores del arreglo tipos
};

void mostrar(struct compu computadoras[], int indice);

int masVieja(struct compu computadora[], int cantidad); // me deuvelve el indice de la compu mas vieja

int masRapida(struct compu computadora[], int cantidad);


int main (){

    char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    struct compu computadoras[5];

    //carga de datos

    for (int i = 0; i < NUMCOMPUS; i++)
    {
        computadoras[i].velocidad = 1 + rand() % 3;
        computadoras[i].anio = 2015 + rand() % 8;
        computadoras[i].cantidad = 1+ rand() % 8;
        computadoras[i].tipo_cpu= tipos[rand()%7];
    }
    printf("\n--------------------------------");
    for (int i = 0; i < NUMCOMPUS; i++)
    {
        mostrar(computadoras, i);
    }
    printf("\n=============Computadora más vieja==============");
    mostrar(computadoras, masVieja(computadoras,NUMCOMPUS));
        printf("\n=============Computadora más Rapida==============");
    mostrar(computadoras, masRapida(computadoras,NUMCOMPUS));

    return 0;
}

void mostrar(struct compu computadoras[], int indice){   
   
    printf("\nComputadora Nro: %d",indice+1);
    printf("\nVelocidad: %d", computadoras[indice].velocidad);
    printf("\nAño: %d", computadoras[indice].anio);
    printf("\nCantidad: %d", computadoras[indice].cantidad);
    printf("\nTipo de CPU: %s ",computadoras[indice].tipo_cpu);
    printf("\n--------------------------------");

}

int masVieja(struct compu computadora[], int cantidad){

    struct compu *pCompu;
    pCompu = computadora;
    int cont = 0;
    int max = 9999, indiceMax;
    while (cont < cantidad)
    {
        if (pCompu->anio < max)
        {   
            max = pCompu->anio;
            indiceMax = cont;
        }
        pCompu ++;
        cont ++;
    }

    return indiceMax; 
}

int masRapida(struct compu computadora[], int cantidad){

    struct compu *pCompu;
    pCompu = computadora;
    int cont = 0;
    int max = 0, indiceMax;
    while (cont < cantidad)
    {
        if (pCompu->velocidad > max)
        {   
            max = pCompu->velocidad;
            indiceMax = cont;
        }
        pCompu ++;
        cont ++;
    }

    return indiceMax; 
}