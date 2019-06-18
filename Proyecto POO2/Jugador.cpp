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
    Jugador(string _nombre, int _color){
        nombre = _nombre;
        color = _color;
        Ficha* ficha_1 = new Ficha();
        Ficha* ficha_2 = new Ficha();
        Ficha* ficha_3 = new Ficha();
        Ficha* ficha_4 = new Ficha();
    }

    Ficha* seleccionarFichaEnJuego(){

    }

    void jugar(Ficha *ficha, int movimientos){

    }

    ~Jugador(){}

};
