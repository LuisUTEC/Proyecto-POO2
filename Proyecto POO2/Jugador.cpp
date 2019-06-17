#include <iostream>
#include "Ficha.cpp"
#include "Recorrido.cpp"
#include "Dado.cpp"
using namespace std;

class Jugador{
private:
    string nombre;
    int color;
public:
    Jugador(string _nombre){
        nombre = _nombre;
    }

    Ficha* seleccionarFichaEnJuego(){

    }

    void jugar(Ficha *ficha, int movimientos){

    }

    ~Jugador(){}

};
