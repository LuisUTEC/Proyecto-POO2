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
        Ficha* ficha_1 = new Ficha(1);
        Ficha* ficha_2 = new Ficha(2);
        Ficha* ficha_3 = new Ficha(3);
        Ficha* ficha_4 = new Ficha(4);
    }

    Ficha* seleccionarFichaEnJuego(){

    }

    void jugar(Ficha *ficha, int movimientos){

    }

    ~Jugador(){}

};
