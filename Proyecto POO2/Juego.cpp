#include <iostream>
#include "Ficha.cpp"
#include "Jugador.cpp"
#include "Casilla.cpp"
using namespace std;

class Juego{
private:
    int turno;
    int numeroJugadores;

public:
    void iniciarJuego(){

    }

    void siguienteTurno(){
        Jugador turno;
        vector<Jugador> Turnos;
        turno[0]=Jugador(" ", 0);
        turno[1]=Jugador(" ", 1);
        turno[2]=Jugador(" ", 2);
        turno[3]=Jugador(" ", 3);

    Dado a;
    for int(i=0;i<4;i++){

        if (a.lanzar()!= 6){
            turno=turno[i];
        }
    }

    }

    void adiciionarJugador( string nombre , int color){}

    void validarFinJuego(){}

    void validarSalidaFicha(){
    Jugador uno;
    if(uno.fichas.estado==CasillaZonaSegura.mostrarEstadoCasilla()){
        uno.jugar();
    }}

    void validarCapturaFicha(){}

    void finalizarJuego(){
    //Si todas sus fichas estan en el destino final significa que gano
Jugador uno;

    if(uno.fichas.estado==CasillaDestinoFinal.mostrarEstadoCasilla()){
sf::Font fuente;
if (!font.loadFromFile("arial.ttf"))
	{

	}
	sf::Text texto;
	texto.setFont(fuente);
	texto.setString("Ganaste");
	texto.setColor(sf::Color::Red);
	texto.setCharacterSize(120);
	window.draw(texto);

    }

    }


};



