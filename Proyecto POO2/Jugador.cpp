#include <iostream>
#include "Ficha.cpp"
#include "Recorrido.cpp"
#include "Dado.cpp"
#include "Juego.cpp"

using namespace std;

class Jugador{
private:
    string nombre;
    int color;
    Ficha* fichas;
public:
    Jugador(string _nombre, int _color){
        nombre = _nombre;
        color = _color;
        Ficha* ficha_1 = new Ficha(1);
        Ficha* ficha_2 = new Ficha(2);
        Ficha* ficha_3 = new Ficha(3);
        Ficha* ficha_4 = new Ficha(4);
        fichas[0] = *ficha_1;
        fichas[1] = *ficha_2;
        fichas[2] = *ficha_3;
        fichas[3] = *ficha_4;
    }

    Ficha seleccionarFichaEnJuego(int ficha){
        return fichas[ficha];


    }

    void jugar(Ficha *ficha, int movimientos){
Ficha jugar;

if(jugar.getEstado=='c'){
    jugar.validarSalida();
}
else: {
    jugar.CalcularMovimiento();

}

    }

    ~Jugador(){}

};
