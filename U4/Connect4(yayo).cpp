/*#define FILAS 6
#define COLUMNAS 7
#define TAMAÑO_MATRIZ sizeof(char)FILAS*COLUMNAS
#define JUGADOR_1 'O'
#define JUGADOR_2 'X
#define JUGADOR_CPU_1 JUGADOR_1
#define JUGADOR_CPU_2 JUGADOR_2
#define ESPACIO_VACIO ' '
#define FILA_NO_ENCONTRADA -1 */

#include <iostream>
using namespace std;
#include <stdio.h>

int obtenerFilaDesocupada(int columna, char tablero[FILAS][COLUMNAS]){
    int i;
    for (i = FILAS -1; i >= 0 ,i--){
        if (tablero[i][columna]= espacio_Vacio)
        {
            return i;
        }
    return fila_No_Encontrada;
    }
    
}

void dibujarEncabezado (int columnas){
    cout << endl;
    int i;
    for ( i = 0; i < columnas; ++i) {
        cout << "|%d", i +1;
        if (i+1 >= columnas)
        {
            cout<< "|";
        }
        
    }
}


int dibujarTablero(char tablero[FILAS][COLUMNAS]){
    dibujarEncabezado(COLUMNAS);
    cout << endl;
    int i;
    for ( i = 0; i < FILAS; ++i)
    {
        int j;
        for (j = 0; j < COLUMNAS; ++j)
        {
            cout << "|%c",tablero[i][j];
            if (j+1 >=COLUMNAS)
            {
                cout << "|";
            }
            cout << endl;
        }
        
    }
    return 0;
    
}



int main(){
}