#include <iostream>
#include "Ficha.cpp"
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
        ficha->mover();
    }

    ~Jugador(){}

};
