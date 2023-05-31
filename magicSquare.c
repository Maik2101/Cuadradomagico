#include <stdio.h>
#include "magicSquare.h"

int cuadradoMagico(int filas, int columnas, int cuadrado[filas][columnas]) {

    int constanteMagica = calcularConstanteMagica(filas, columnas, cuadrado);
           for (int i = 0; i < filas; i++) {
        int sumaFila = 0;
        for (int j = 0; j < columnas; j++) {
            sumaFila += cuadrado[i][j];
        }
        if (sumaFila != constanteMagica) {
            return 0; 
        }
    }
    

    for (int j = 0; j < columnas; j++) {
        int sumaColumna = 0;
        for (int i = 0; i < filas; i++) {
            sumaColumna += cuadrado[i][j];
        }
        if (sumaColumna != constanteMagica) {
            return 0; 
        }
    }
    
  
    int sumaDiagonalPrincipal = 0;
    for (int i = 0; i < filas; i++) {
        sumaDiagonalPrincipal += cuadrado[i][i];
    }
    if (sumaDiagonalPrincipal != constanteMagica) {
        return 0; 
    }
    

    int sumaDiagonalSecundaria = 0;
    for (int i = 0; i < filas; i++) {
        sumaDiagonalSecundaria += cuadrado[i][columnas - i - 1];
    }
    if (sumaDiagonalSecundaria != constanteMagica) {
        return 0;
    }
    
    return 1; 
}

int calcularConstanteMagica(int filas, int columnas, int cuadrado[filas][columnas]) {
    int suma = 0;
    for (int j = 0; j < columnas; j++) {
        suma += cuadrado[0][j];
    }
    
    return suma;
}

void imprimirCuadrado(int filas, int columnas, int cuadrado[filas][columnas]) {
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%d", cuadrado[i][j]);
        }
        printf("\n");
    }
    
    
}