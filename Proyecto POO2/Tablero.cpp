//
// Created by LCorderoP on 27/05/2019.
//
#include <iostream>
#include "Casilla.cpp"

using namespace std;

class Tablero{
public:
    Tablero() {
        Casilla* casilla_1 = new CasillaCasa();
        Casilla* casilla_2 = new CasillaZonaSegura();
        Casilla* casilla_3 = new CasillaRecorrido();
        Casilla* casilla_4 = new CasillaDestinoFinal();
        Casilla* casilla_5 = new CasillaInicio();
    }
    void cargarTablero(){


    };
    void mostrar(){
        cout << "Tablero" << endl;


    }
};