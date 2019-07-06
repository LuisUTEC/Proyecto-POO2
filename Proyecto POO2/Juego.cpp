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

        vector<Jugador> Turnos;
        turno[0]=Jugador(" ", 0);
        turno[1]=Jugador(" ", 1);
        turno[2]=Jugador(" ", 2);
        turno[3]=Jugador(" ", 3);
        // Selecciona la primera ficha
        Turnos[0].seleccionarFichaenJuego(0);
    }

    void siguienteTurno(){
    // Si es diferente de 6, cambia de turno si no vuelve a lanzar
    for int(i=0;i<4;i++){

        if (a.lanzar()!= 6){
            turno=turno[i];
        }
    }

    }

    void adiciionarJugador( string nombre , int color){
    Jugador nuevo;
    nuevo(nombre,color);

    }

   bool validarFinJuego(){
       //Si todas las fichas estan en el destino final
     if(uno.fichas.estado==CasillaDestinoFinal.mostrarEstadoCasilla())
        return true;
     else return false;
    }

    void validarSalidaFicha(){

        //Si es 6 sale , sino vuelve a probar
    Jugador uno;
    Dado uno;
    if(uno.fichas.estado==CasillaZonaSegura.mostrarEstadoCasilla()){
            if(uno.lanzar()==6)
        uno.jugar();
    }
    else validarSalidaFicha();
    }

    void validarCapturaFicha(){
    Casilla primero, segundo, tercero, cuarto;
    int posactual[10][10];
    // si las posiciones son iguales manda el segundo a la carcel

    if (posactual[primero.getX][primero.Y]==posactual[segundo.getX][segundo.getY]){
        segundo.setX(0);
        segundo.setY(0);
    }
    if (posactual[primero.getX][primero.Y]==posactual[tercero.getX][tercero.getY]){
        tercero.setX(0);
        tercero.setY(0);
    }
    if (posactual[primero.getX][primero.Y]==posactual[cuarto.getX][cuarto.getY]){
        cuarto.setX(0);
        cuarto.setY(0);
    }

    }

    void finalizarJuego(){
    //Si todas sus fichas estan en el destino final significa que gano
Jugador uno;

    if(validarFinJuego()==true){
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
    }


};

