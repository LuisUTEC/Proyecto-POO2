#include <iostream>
#include "Casilla.cpp"

using namespace std;

class Ficha{
private:
char estado; // Estados : c=CASA, j= En Juego, s= Zona segura, f=Destino final
Casilla* posicion;

public:
    Ficha(){
        setEstado('c');

    }

    void mover(Casilla *casilla ){
        if ((getEstado()=='j')||(getEstado()=='s')){

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