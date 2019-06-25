#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <SFML/Graphics.hpp>
#include "Jugador.cpp"
#include "Juego.cpp"
#include "Ficha.cpp"
#include "Dado.cpp"
#include "Tablero.cpp"
#include "Recorrido.cpp"
#include "Casilla.cpp"


using namespace std;

int main()
{

    int Tablero[11][11];

    sf::RenderWindow window(sf::VideoMode(1000, 650), "Ludo");

// ======================= CASILLAS CASA ================================




    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear(sf::Color::White);
        window.draw(Casa_1_amarillo);
        window.draw(Casa_2_amarillo);
        window.draw(Casa_3_amarillo);
        window.draw(Casa_4_amarillo);
        window.draw(Casa_1_rojo);
        window.draw(Casa_2_rojo);
        window.draw(Casa_3_rojo);
        window.draw(Casa_4_rojo);
        window.draw(Casa_1_verde);
        window.draw(Casa_2_verde);
        window.draw(Casa_3_verde);
        window.draw(Casa_4_verde);
        window.draw(Casa_1_azul);
        window.draw(Casa_2_azul);
        window.draw(Casa_3_azul);
        window.draw(Casa_4_azul);
        window.draw(Recorrido1_1);
        window.draw(Recorrido1_2);
        window.draw(Recorrido1_3);
        window.draw(Recorrido1_4);
        window.draw(Recorrido1_5);
        window.draw(Recorrido1_6);
        window.draw(Recorrido1_7);
        window.draw(Recorrido1_8);
        window.draw(Recorrido1_9);
        window.draw(Recorrido1_10);
        window.draw(Recorrido2_1);
        window.draw(Recorrido2_2);
        window.draw(Recorrido2_3);
        window.draw(Recorrido2_4);
        window.draw(Recorrido2_5);
        window.draw(Recorrido2_6);
        window.draw(Recorrido2_7);
        window.draw(Recorrido2_8);
        window.draw(Recorrido2_9);
        window.draw(Recorrido2_10);
        window.draw(Recorrido3_1);
        window.draw(Recorrido3_2);
        window.draw(Recorrido3_3);
        window.draw(Recorrido3_4);
        window.draw(Recorrido3_5);
        window.draw(Recorrido3_6);
        window.draw(Recorrido3_7);
        window.draw(Recorrido3_8);
        window.draw(Recorrido4_1);
        window.draw(Recorrido4_2);
        window.draw(Recorrido4_3);
        window.draw(Recorrido4_4);
        window.draw(Recorrido4_5);
        window.draw(Recorrido4_6);
        window.draw(Recorrido4_7);
        window.draw(Recorrido4_8);
        window.draw(Inicio_amarillo);
        window.draw(Inicio_rojo);
        window.draw(Inicio_verde);
        window.draw(Inicio_azul);
        window.draw(SeguroVerde_1);
        window.draw(SeguroVerde_2);
        window.draw(SeguroVerde_3);
        window.draw(SeguroRojo_1);
        window.draw(SeguroRojo_2);
        window.draw(SeguroRojo_3);
        window.draw(SeguroAzul_1);
        window.draw(SeguroAzul_2);
        window.draw(SeguroAzul_3);
        window.draw(SeguroAmarillo_1);
        window.draw(SeguroAmarillo_2);
        window.draw(SeguroAmarillo_3);
        window.draw(DestinoFinal_Amarillo);
        window.draw(DestinoFinal_Azul);
        window.draw(DestinoFinal_Rojo);
        window.draw(DestinoFinal_Verde);

        window.display();
    }
    return 0;
}
