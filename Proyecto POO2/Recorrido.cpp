#include <iostream>
#include "Casilla.cpp"
using namespace std;

class Recorrido{

public:
    Recorrido(){}

    Casilla* calcularMovimiento(Casilla* casilla, int movimientos){
        Casilla* cas;
        for (int i = 0; i < movimientos; ++i) {
            if ((casilla->getX() < -1)||(casilla->getX() > 0)){ //determina derecha o izquierda
                if (casilla->getY() < 0){ //determina arriba o abajo

                }
            }
        }


    }

    ~Recorrido(){}
};
