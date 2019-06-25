#include <iostream>
#include "Casilla.cpp"
#include "Tablero.cpp"

using namespace std;
Tablero* tablero = new Tablero();

class Ficha{
private:
char estado; // Estados : c=CASA, j= En Juego, s= Zona segura, f=Destino final
Casilla* posicion;

public:
    Ficha(int i){
        setEstado('c');
        setPosicion(tablero->getMesa(i,i));

    }

    void mover(Casilla *casilla ){
        if ((getEstado()=='j')||(getEstado()=='s')){
            tablero->getMesa(posicion->getX(),posicion->getY());
        }
    }

    char getEstado() const {
        return estado;
    }

    void setEstado(char estado) {
        Ficha::estado = estado;
    }

    Casilla *getPosicion() const {
        return posicion;
    }

    void setPosicion(Casilla *posicion) {
        Ficha::posicion = posicion;
    }

    ~Ficha() {}

};