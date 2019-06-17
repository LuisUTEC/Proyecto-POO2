#include <iostream>
#include "Casilla.cpp"

using namespace std;

class Ficha{
private:
char estado;
// Estados : c=CASA, j= En Juego, s= Zona segura, f=Destino final

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

    ~Ficha() {}

};