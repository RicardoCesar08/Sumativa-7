#include <stdio.h>
#include <stdlib.h>

/*Elaborar una aplicación de línea de comandos en C que dado 10 números, pueda mostrar cuál es el número mayor
y el número de veces que aparece en la serie.*/

int main()
{
    int a, i, j;
    float numeros[1][10];
    float altito  = numeros[0][0];
    int canti;


/*ingreso de valores*/
    printf("Ingresa 10 numeros porfavor\n");
    while(a < 10){
     scanf("%f", &numeros[0][a]);
        a++;
    }


/*encontrar el numero mas alto*/
    for(i=0; i<1; i++){
        for(j=0; j<10; j++){
            if(numeros[i][j]>altito){
                altito=numeros[i][j];
            }
        }
    }


/*cuantas veces se repitio*/
    for(i=0; i<1; i++){
        for(j=0; j<10; j++){
            if(numeros[i][j] == altito){
                canti++;
            }
        }
    }


/*Imprimir datos*/
    printf("el numero mas alto ingresao fue de %f y se ingreso %d veces", altito, canti);

    return 0;
}
