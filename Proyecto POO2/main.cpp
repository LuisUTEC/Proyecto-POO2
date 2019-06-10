#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include <SFML/Graphics.hpp>

using namespace std;

int main()
{
    int ini_x = 20;
    int ini_y = 25;
    int space = 5;
    int circulo = 50;
    int Tablero[11][11];

    sf::RenderWindow window(sf::VideoMode(1000, 650), "Ludo");

// ======================= CASILLAS CASA ================================
    sf::CircleShape Casa_1_amarillo(20.f);
    Casa_1_amarillo.setFillColor(sf::Color(231, 235, 1));
    Casa_1_amarillo.setOutlineThickness(5.f);
    Casa_1_amarillo.setOutlineColor(sf::Color(231, 235, 1));
    Casa_1_amarillo.setPosition(ini_x + circulo*1,ini_y + circulo*1);

    sf::CircleShape Casa_2_amarillo(20.f);
    Casa_2_amarillo.setFillColor(sf::Color(231, 235, 1));
    Casa_2_amarillo.setOutlineThickness(5.f);
    Casa_2_amarillo.setOutlineColor(sf::Color(231, 235, 1));
    Casa_2_amarillo.setPosition(ini_x + circulo*2 + space,ini_y + circulo*1);

    sf::CircleShape Casa_3_amarillo(20.f);
    Casa_3_amarillo.setFillColor(sf::Color(231, 235, 1));
    Casa_3_amarillo.setOutlineThickness(5.f);
    Casa_3_amarillo.setOutlineColor(sf::Color(231, 235, 1));
    Casa_3_amarillo.setPosition(ini_x + circulo*1,ini_y + circulo*2 + space);

    sf::CircleShape Casa_4_amarillo(20.f);
    Casa_4_amarillo.setFillColor(sf::Color(231, 235, 1));
    Casa_4_amarillo.setOutlineThickness(5.f);
    Casa_4_amarillo.setOutlineColor(sf::Color(231, 235, 1));
    Casa_4_amarillo.setPosition(ini_x + circulo*2 + space,ini_y + circulo*2 + space);

    sf::CircleShape Casa_1_rojo(20.f);
    Casa_1_rojo.setFillColor(sf::Color(255, 0, 0));
    Casa_1_rojo.setOutlineThickness(5.f);
    Casa_1_rojo.setOutlineColor(sf::Color(255, 0, 0));
    Casa_1_rojo.setPosition(ini_x + circulo*8,ini_y + circulo*1);

    sf::CircleShape Casa_2_rojo(20.f);
    Casa_2_rojo.setFillColor(sf::Color(255, 0, 0));
    Casa_2_rojo.setOutlineThickness(5.f);
    Casa_2_rojo.setOutlineColor(sf::Color(255, 0, 0));
    Casa_2_rojo.setPosition(ini_x + circulo*9 + space,ini_y + circulo*1);

    sf::CircleShape Casa_3_rojo(20.f);
    Casa_3_rojo.setFillColor(sf::Color(255, 0, 0));
    Casa_3_rojo.setOutlineThickness(5.f);
    Casa_3_rojo.setOutlineColor(sf::Color(255, 0, 0));
    Casa_3_rojo.setPosition(ini_x + circulo*8,ini_y + circulo*2 + space);

    sf::CircleShape Casa_4_rojo(20.f);
    Casa_4_rojo.setFillColor(sf::Color(255, 0, 0));
    Casa_4_rojo.setOutlineThickness(5.f);
    Casa_4_rojo.setOutlineColor(sf::Color(255, 0, 0));
    Casa_4_rojo.setPosition(ini_x + circulo*9 + space,ini_y + circulo*2 + space);

    sf::CircleShape Casa_1_verde(20.f);
    Casa_1_verde.setFillColor(sf::Color(0, 220, 0));
    Casa_1_verde.setOutlineThickness(5.f);
    Casa_1_verde.setOutlineColor(sf::Color(0, 220, 0));
    Casa_1_verde.setPosition(ini_x + circulo*1,ini_y + circulo*8);

    sf::CircleShape Casa_2_verde(20.f);
    Casa_2_verde.setFillColor(sf::Color(0, 220, 0));
    Casa_2_verde.setOutlineThickness(5.f);
    Casa_2_verde.setOutlineColor(sf::Color(0, 220, 0));
    Casa_2_verde.setPosition(ini_x + circulo*2 + space,ini_y + circulo*8);

    sf::CircleShape Casa_3_verde(20.f);
    Casa_3_verde.setFillColor(sf::Color(0, 220, 0));
    Casa_3_verde.setOutlineThickness(5.f);
    Casa_3_verde.setOutlineColor(sf::Color(0, 220, 0));
    Casa_3_verde.setPosition(ini_x + circulo*1,ini_y + circulo*9 + space);

    sf::CircleShape Casa_4_verde(20.f);
    Casa_4_verde.setFillColor(sf::Color(0, 220, 0));
    Casa_4_verde.setOutlineThickness(5.f);
    Casa_4_verde.setOutlineColor(sf::Color(0, 220, 0));
    Casa_4_verde.setPosition(ini_x + circulo*2 + space,ini_y + circulo*9 + space);

    sf::CircleShape Casa_1_azul(20.f);
    Casa_1_azul.setFillColor(sf::Color(0, 0, 220));
    Casa_1_azul.setOutlineThickness(5.f);
    Casa_1_azul.setOutlineColor(sf::Color(0, 0, 220));
    Casa_1_azul.setPosition(ini_x + circulo*8,ini_y + circulo*8);

    sf::CircleShape Casa_2_azul(20.f);
    Casa_2_azul.setFillColor(sf::Color(0, 0, 220));
    Casa_2_azul.setOutlineThickness(5.f);
    Casa_2_azul.setOutlineColor(sf::Color(0, 0, 220));
    Casa_2_azul.setPosition(ini_x + circulo*9 + space,ini_y + circulo*8);

    sf::CircleShape Casa_3_azul(20.f);
    Casa_3_azul.setFillColor(sf::Color(0, 0, 220));
    Casa_3_azul.setOutlineThickness(5.f);
    Casa_3_azul.setOutlineColor(sf::Color(0, 0, 220));
    Casa_3_azul.setPosition(ini_x + circulo*8,ini_y + circulo*9 + space);

    sf::CircleShape Casa_4_azul(20.f);
    Casa_4_azul.setFillColor(sf::Color(0, 0, 220));
    Casa_4_azul.setOutlineThickness(5.f);
    Casa_4_azul.setOutlineColor(sf::Color(0, 0, 220));
    Casa_4_azul.setPosition(ini_x + circulo*9 + space,ini_y + circulo*9 + space);

// ======================= CASILLAS CAMINO ================================
//parte izquierda
    sf::CircleShape Recorrido1_1(20.f);
    Recorrido1_1.setFillColor(sf::Color(255, 255, 255));
    Recorrido1_1.setOutlineThickness(5.f);
    Recorrido1_1.setOutlineColor(sf::Color(0, 0, 0));
    Recorrido1_1.setPosition(circulo*1 + space,ini_y + circulo*4 + space);

    sf::CircleShape Recorrido1_2(20.f);
    Recorrido1_2.setFillColor(sf::Color(255, 255, 255));
    Recorrido1_2.setOutlineThickness(5.f);
    Recorrido1_2.setOutlineColor(sf::Color(0, 0, 0));
    Recorrido1_2.setPosition(circulo*2 + space,ini_y + circulo*4 + space);

    sf::CircleShape Recorrido1_3(20.f);
    Recorrido1_3.setFillColor(sf::Color(255, 255, 255));
    Recorrido1_3.setOutlineThickness(5.f);
    Recorrido1_3.setOutlineColor(sf::Color(0, 0, 0));
    Recorrido1_3.setPosition(circulo*3 + space,ini_y + circulo*4 + space);

    sf::CircleShape Recorrido1_4(20.f);
    Recorrido1_4.setFillColor(sf::Color(255, 255, 255));
    Recorrido1_4.setOutlineThickness(5.f);
    Recorrido1_4.setOutlineColor(sf::Color(0, 0, 0));
    Recorrido1_4.setPosition(circulo*4 + space,ini_y + circulo*4 + space);

    sf::CircleShape Recorrido1_5(20.f);
    Recorrido1_5.setFillColor(sf::Color(255, 255, 255));
    Recorrido1_5.setOutlineThickness(5.f);
    Recorrido1_5.setOutlineColor(sf::Color(0, 0, 0));
    Recorrido1_5.setPosition(space,ini_y + circulo*5 + space);

    sf::CircleShape Recorrido1_6(20.f);
    Recorrido1_6.setFillColor(sf::Color(255, 255, 255));
    Recorrido1_6.setOutlineThickness(5.f);
    Recorrido1_6.setOutlineColor(sf::Color(0, 0, 0));
    Recorrido1_6.setPosition(space,ini_y + circulo*6 + space);

    sf::CircleShape Recorrido1_7(20.f);
    Recorrido1_7.setFillColor(sf::Color(255, 255, 255));
    Recorrido1_7.setOutlineThickness(5.f);
    Recorrido1_7.setOutlineColor(sf::Color(0, 0, 0));
    Recorrido1_7.setPosition(circulo*1 + space,ini_y + circulo*6 + space);

    sf::CircleShape Recorrido1_8(20.f);
    Recorrido1_8.setFillColor(sf::Color(255, 255, 255));
    Recorrido1_8.setOutlineThickness(5.f);
    Recorrido1_8.setOutlineColor(sf::Color(0, 0, 0));
    Recorrido1_8.setPosition(circulo*2 + space,ini_y + circulo*6 + space);


    sf::CircleShape Recorrido1_9(20.f);
    Recorrido1_9.setFillColor(sf::Color(255, 255, 255));
    Recorrido1_9.setOutlineThickness(5.f);
    Recorrido1_9.setOutlineColor(sf::Color(0, 0, 0));
    Recorrido1_9.setPosition(circulo*3 + space,ini_y + circulo*6 + space);

    sf::CircleShape Recorrido1_10(20.f);
    Recorrido1_10.setFillColor(sf::Color(255, 255, 255));
    Recorrido1_10.setOutlineThickness(5.f);
    Recorrido1_10.setOutlineColor(sf::Color(0, 0, 0));
    Recorrido1_10.setPosition(circulo*4 + space,ini_y + circulo*6 + space);

// parte derecha
    sf::CircleShape Recorrido2_1(20.f);
    Recorrido2_1.setFillColor(sf::Color(255, 255, 255));
    Recorrido2_1.setOutlineThickness(5.f);
    Recorrido2_1.setOutlineColor(sf::Color(0, 0, 0));
    Recorrido2_1.setPosition(circulo*6 + space,ini_y + circulo*6 + space);

    sf::CircleShape Recorrido2_2(20.f);
    Recorrido2_2.setFillColor(sf::Color(255, 255, 255));
    Recorrido2_2.setOutlineThickness(5.f);
    Recorrido2_2.setOutlineColor(sf::Color(0, 0, 0));
    Recorrido2_2.setPosition(circulo*7 + space,ini_y + circulo*6 + space);

    sf::CircleShape Recorrido2_3(20.f);
    Recorrido2_3.setFillColor(sf::Color(255, 255, 255));
    Recorrido2_3.setOutlineThickness(5.f);
    Recorrido2_3.setOutlineColor(sf::Color(0, 0, 0));
    Recorrido2_3.setPosition(circulo*8 + space,ini_y + circulo*6 + space);

    sf::CircleShape Recorrido2_4(20.f);
    Recorrido2_4.setFillColor(sf::Color(255, 255, 255));
    Recorrido2_4.setOutlineThickness(5.f);
    Recorrido2_4.setOutlineColor(sf::Color(0, 0, 0));
    Recorrido2_4.setPosition(circulo*9 + space,ini_y + circulo*6 + space);

    sf::CircleShape Recorrido2_5(20.f);
    Recorrido2_5.setFillColor(sf::Color(255, 255, 255));
    Recorrido2_5.setOutlineThickness(5.f);
    Recorrido2_5.setOutlineColor(sf::Color(0, 0, 0));
    Recorrido2_5.setPosition(circulo*10 + space,ini_y + circulo*5 + space);

    sf::CircleShape Recorrido2_6(20.f);
    Recorrido2_6.setFillColor(sf::Color(255, 255, 255));
    Recorrido2_6.setOutlineThickness(5.f);
    Recorrido2_6.setOutlineColor(sf::Color(0, 0, 0));
    Recorrido2_6.setPosition(circulo*6 + space,ini_y + circulo*4 + space);

    sf::CircleShape Recorrido2_7(20.f);
    Recorrido2_7.setFillColor(sf::Color(255, 255, 255));
    Recorrido2_7.setOutlineThickness(5.f);
    Recorrido2_7.setOutlineColor(sf::Color(0, 0, 0));
    Recorrido2_7.setPosition(circulo*7 + space,ini_y + circulo*4 + space);

    sf::CircleShape Recorrido2_8(20.f);
    Recorrido2_8.setFillColor(sf::Color(255, 255, 255));
    Recorrido2_8.setOutlineThickness(5.f);
    Recorrido2_8.setOutlineColor(sf::Color(0, 0, 0));
    Recorrido2_8.setPosition(circulo*8 + space,ini_y + circulo*4 + space);

    sf::CircleShape Recorrido2_9(20.f);
    Recorrido2_9.setFillColor(sf::Color(255, 255, 255));
    Recorrido2_9.setOutlineThickness(5.f);
    Recorrido2_9.setOutlineColor(sf::Color(0, 0, 0));
    Recorrido2_9.setPosition(circulo*9 + space,ini_y + circulo*4 + space);

    sf::CircleShape Recorrido2_10(20.f);
    Recorrido2_10.setFillColor(sf::Color(255, 255, 255));
    Recorrido2_10.setOutlineThickness(5.f);
    Recorrido2_10.setOutlineColor(sf::Color(0, 0, 0));
    Recorrido2_10.setPosition(circulo*10 + space,ini_y + circulo*4 + space);
// parte arriba
    sf::CircleShape Recorrido3_1(20.f);
    Recorrido3_1.setFillColor(sf::Color(255, 255, 255));
    Recorrido3_1.setOutlineThickness(5.f);
    Recorrido3_1.setOutlineColor(sf::Color(0, 0, 0));
    Recorrido3_1.setPosition(circulo*4 + space,ini_y + circulo*0 + space);

    sf::CircleShape Recorrido3_2(20.f);
    Recorrido3_2.setFillColor(sf::Color(255, 255, 255));
    Recorrido3_2.setOutlineThickness(5.f);
    Recorrido3_2.setOutlineColor(sf::Color(0, 0, 0));
    Recorrido3_2.setPosition(circulo*4 + space,ini_y + circulo*1 + space);

    sf::CircleShape Recorrido3_3(20.f);
    Recorrido3_3.setFillColor(sf::Color(255, 255, 255));
    Recorrido3_3.setOutlineThickness(5.f);
    Recorrido3_3.setOutlineColor(sf::Color(0, 0, 0));
    Recorrido3_3.setPosition(circulo*4 + space,ini_y + circulo*2 + space);

    sf::CircleShape Recorrido3_4(20.f);
    Recorrido3_4.setFillColor(sf::Color(255, 255, 255));
    Recorrido3_4.setOutlineThickness(5.f);
    Recorrido3_4.setOutlineColor(sf::Color(0, 0, 0));
    Recorrido3_4.setPosition(circulo*4 + space,ini_y + circulo*3 + space);

    sf::CircleShape Recorrido3_5(20.f);
    Recorrido3_5.setFillColor(sf::Color(255, 255, 255));
    Recorrido3_5.setOutlineThickness(5.f);
    Recorrido3_5.setOutlineColor(sf::Color(0, 0, 0));
    Recorrido3_5.setPosition(circulo*5 + space,ini_y + circulo*0 + space);

    sf::CircleShape Recorrido3_6(20.f);
    Recorrido3_6.setFillColor(sf::Color(255, 255, 255));
    Recorrido3_6.setOutlineThickness(5.f);
    Recorrido3_6.setOutlineColor(sf::Color(0, 0, 0));
    Recorrido3_6.setPosition(circulo*6 + space,ini_y + circulo*1 + space);

    sf::CircleShape Recorrido3_7(20.f);
    Recorrido3_7.setFillColor(sf::Color(255, 255, 255));
    Recorrido3_7.setOutlineThickness(5.f);
    Recorrido3_7.setOutlineColor(sf::Color(0, 0, 0));
    Recorrido3_7.setPosition(circulo*6 + space,ini_y + circulo*2 + space);

    sf::CircleShape Recorrido3_8(20.f);
    Recorrido3_8.setFillColor(sf::Color(255, 255, 255));
    Recorrido3_8.setOutlineThickness(5.f);
    Recorrido3_8.setOutlineColor(sf::Color(0, 0, 0));
    Recorrido3_8.setPosition(circulo*6 + space,ini_y + circulo*3 + space);
// parte abajo
    sf::CircleShape Recorrido4_1(20.f);
    Recorrido4_1.setFillColor(sf::Color(255, 255, 255));
    Recorrido4_1.setOutlineThickness(5.f);
    Recorrido4_1.setOutlineColor(sf::Color(0, 0, 0));
    Recorrido4_1.setPosition(circulo*4 + space,ini_y + circulo*9 + space);

    sf::CircleShape Recorrido4_2(20.f);
    Recorrido4_2.setFillColor(sf::Color(255, 255, 255));
    Recorrido4_2.setOutlineThickness(5.f);
    Recorrido4_2.setOutlineColor(sf::Color(0, 0, 0));
    Recorrido4_2.setPosition(circulo*4 + space,ini_y + circulo*8 + space);

    sf::CircleShape Recorrido4_3(20.f);
    Recorrido4_3.setFillColor(sf::Color(255, 255, 255));
    Recorrido4_3.setOutlineThickness(5.f);
    Recorrido4_3.setOutlineColor(sf::Color(0, 0, 0));
    Recorrido4_3.setPosition(circulo*4 + space,ini_y + circulo*7 + space);

    sf::CircleShape Recorrido4_4(20.f);
    Recorrido4_4.setFillColor(sf::Color(255, 255, 255));
    Recorrido4_4.setOutlineThickness(5.f);
    Recorrido4_4.setOutlineColor(sf::Color(0, 0, 0));
    Recorrido4_4.setPosition(circulo*6 + space,ini_y + circulo*7 + space);

    sf::CircleShape Recorrido4_5(20.f);
    Recorrido4_5.setFillColor(sf::Color(255, 255, 255));
    Recorrido4_5.setOutlineThickness(5.f);
    Recorrido4_5.setOutlineColor(sf::Color(0, 0, 0));
    Recorrido4_5.setPosition(circulo*5 + space,ini_y + circulo*10 + space);

    sf::CircleShape Recorrido4_6(20.f);
    Recorrido4_6.setFillColor(sf::Color(255, 255, 255));
    Recorrido4_6.setOutlineThickness(5.f);
    Recorrido4_6.setOutlineColor(sf::Color(0, 0, 0));
    Recorrido4_6.setPosition(circulo*6 + space,ini_y + circulo*10 + space);

    sf::CircleShape Recorrido4_7(20.f);
    Recorrido4_7.setFillColor(sf::Color(255, 255, 255));
    Recorrido4_7.setOutlineThickness(5.f);
    Recorrido4_7.setOutlineColor(sf::Color(0, 0, 0));
    Recorrido4_7.setPosition(circulo*6 + space,ini_y + circulo*9 + space);

    sf::CircleShape Recorrido4_8(20.f);
    Recorrido4_8.setFillColor(sf::Color(255, 255, 255));
    Recorrido4_8.setOutlineThickness(5.f);
    Recorrido4_8.setOutlineColor(sf::Color(0, 0, 0));
    Recorrido4_8.setPosition(circulo*6 + space,ini_y + circulo*8 + space);
//============================ CASILLAS INICIO ==============================
    sf::CircleShape Inicio_amarillo(20.f);
    Inicio_amarillo.setFillColor(sf::Color(231, 235, 1));
    Inicio_amarillo.setOutlineThickness(5.f);
    Inicio_amarillo.setOutlineColor(sf::Color(0, 0, 0));
    Inicio_amarillo.setPosition(space,ini_y + circulo*4 + space);

    sf::CircleShape Inicio_rojo(20.f);
    Inicio_rojo.setFillColor(sf::Color(252, 0, 0));
    Inicio_rojo.setOutlineThickness(5.f);
    Inicio_rojo.setOutlineColor(sf::Color(0, 0, 0));
    Inicio_rojo.setPosition(circulo*6 + space,ini_y + space);

    sf::CircleShape Inicio_verde(20.f);
    Inicio_verde.setFillColor(sf::Color(0, 252, 0));
    Inicio_verde.setOutlineThickness(5.f);
    Inicio_verde.setOutlineColor(sf::Color(0, 0, 0));
    Inicio_verde.setPosition(circulo*4 + space, ini_y + circulo*10 + space);

    sf::CircleShape Inicio_azul(20.f);
    Inicio_azul.setFillColor(sf::Color(0, 0, 252));
    Inicio_azul.setOutlineThickness(5.f);
    Inicio_azul.setOutlineColor(sf::Color(0, 0, 0));
    Inicio_azul.setPosition(circulo*10 + space,ini_y + circulo*6 + space);

//===================== CASILLAS SEGURAS ===================================
    sf::CircleShape SeguroAmarillo_1(20.f);
    SeguroAmarillo_1.setFillColor(sf::Color(231, 235, 1));
    SeguroAmarillo_1.setOutlineThickness(5.f);
    SeguroAmarillo_1.setOutlineColor(sf::Color(0, 0, 0));
    SeguroAmarillo_1.setPosition(circulo*1 + space,ini_y + circulo*5 + space);

    sf::CircleShape SeguroAmarillo_2(20.f);
    SeguroAmarillo_2.setFillColor(sf::Color(231, 235, 1));
    SeguroAmarillo_2.setOutlineThickness(5.f);
    SeguroAmarillo_2.setOutlineColor(sf::Color(0, 0, 0));
    SeguroAmarillo_2.setPosition(circulo*2 + space,ini_y + circulo*5 + space);

    sf::CircleShape SeguroAmarillo_3(20.f);
    SeguroAmarillo_3.setFillColor(sf::Color(231, 235, 1));
    SeguroAmarillo_3.setOutlineThickness(5.f);
    SeguroAmarillo_3.setOutlineColor(sf::Color(0, 0, 0));
    SeguroAmarillo_3.setPosition(circulo*3 + space,ini_y + circulo*5 + space);

    sf::CircleShape SeguroAzul_1(20.f);
    SeguroAzul_1.setFillColor(sf::Color(0, 0, 252));
    SeguroAzul_1.setOutlineThickness(5.f);
    SeguroAzul_1.setOutlineColor(sf::Color(0, 0, 0));
    SeguroAzul_1.setPosition(circulo*9 + space,ini_y + circulo*5 + space);

    sf::CircleShape SeguroAzul_2(20.f);
    SeguroAzul_2.setFillColor(sf::Color(0, 0, 252));
    SeguroAzul_2.setOutlineThickness(5.f);
    SeguroAzul_2.setOutlineColor(sf::Color(0, 0, 0));
    SeguroAzul_2.setPosition(circulo*8 + space,ini_y + circulo*5 + space);

    sf::CircleShape SeguroAzul_3(20.f);
    SeguroAzul_3.setFillColor(sf::Color(0, 0, 252));
    SeguroAzul_3.setOutlineThickness(5.f);
    SeguroAzul_3.setOutlineColor(sf::Color(0, 0, 0));
    SeguroAzul_3.setPosition(circulo*7 + space,ini_y + circulo*5 + space);

    sf::CircleShape SeguroRojo_1(20.f);
    SeguroRojo_1.setFillColor(sf::Color(252, 0, 0));
    SeguroRojo_1.setOutlineThickness(5.f);
    SeguroRojo_1.setOutlineColor(sf::Color(0, 0, 0));
    SeguroRojo_1.setPosition(circulo*5 + space,ini_y + circulo*1 + space);

    sf::CircleShape SeguroRojo_2(20.f);
    SeguroRojo_2.setFillColor(sf::Color(252, 0, 0));
    SeguroRojo_2.setOutlineThickness(5.f);
    SeguroRojo_2.setOutlineColor(sf::Color(0, 0, 0));
    SeguroRojo_2.setPosition(circulo*5 + space,ini_y + circulo*2 + space);

    sf::CircleShape SeguroRojo_3(20.f);
    SeguroRojo_3.setFillColor(sf::Color(252, 0, 0));
    SeguroRojo_3.setOutlineThickness(5.f);
    SeguroRojo_3.setOutlineColor(sf::Color(0, 0, 0));
    SeguroRojo_3.setPosition(circulo*5 + space,ini_y + circulo*3 + space);

    sf::CircleShape SeguroVerde_1(20.f);
    SeguroVerde_1.setFillColor(sf::Color(0, 252, 0));
    SeguroVerde_1.setOutlineThickness(5.f);
    SeguroVerde_1.setOutlineColor(sf::Color(0, 0, 0));
    SeguroVerde_1.setPosition(circulo*5 + space,ini_y + circulo*9 + space);

    sf::CircleShape SeguroVerde_2(20.f);
    SeguroVerde_2.setFillColor(sf::Color(0, 252, 0));
    SeguroVerde_2.setOutlineThickness(5.f);
    SeguroVerde_2.setOutlineColor(sf::Color(0, 0, 0));
    SeguroVerde_2.setPosition(circulo*5 + space,ini_y + circulo*8 + space);

    sf::CircleShape SeguroVerde_3(20.f);
    SeguroVerde_3.setFillColor(sf::Color(0, 252, 0));
    SeguroVerde_3.setOutlineThickness(5.f);
    SeguroVerde_3.setOutlineColor(sf::Color(0, 0, 0));
    SeguroVerde_3.setPosition(circulo*5 + space,ini_y + circulo*7 + space);

//================================ DESTINOS FINALES =====================================
    sf::CircleShape DestinoFinal_Amarillo(20.f);
    DestinoFinal_Amarillo.setFillColor(sf::Color(231, 235, 1));
    DestinoFinal_Amarillo.setOutlineThickness(5.f);
    DestinoFinal_Amarillo.setOutlineColor(sf::Color(0, 0, 0));
    DestinoFinal_Amarillo.setPosition(circulo*4 + space,ini_y + circulo*5 + space);

    sf::CircleShape DestinoFinal_Verde(20.f);
    DestinoFinal_Verde.setFillColor(sf::Color(0, 252, 0));
    DestinoFinal_Verde.setOutlineThickness(5.f);
    DestinoFinal_Verde.setOutlineColor(sf::Color(0, 0, 0));
    DestinoFinal_Verde.setPosition(circulo*5 + space,ini_y + circulo*6 + space);

    sf::CircleShape DestinoFinal_Rojo(20.f);
    DestinoFinal_Rojo.setFillColor(sf::Color(252, 0, 0));
    DestinoFinal_Rojo.setOutlineThickness(5.f);
    DestinoFinal_Rojo.setOutlineColor(sf::Color(0, 0, 0));
    DestinoFinal_Rojo.setPosition(circulo*5 + space,ini_y + circulo*4 + space);

    sf::CircleShape DestinoFinal_Azul(20.f);
    DestinoFinal_Azul.setFillColor(sf::Color(0,0,252));
    DestinoFinal_Azul.setOutlineThickness(5.f);
    DestinoFinal_Azul.setOutlineColor(sf::Color(0, 0, 0));
    DestinoFinal_Azul.setPosition(circulo*6 + space,ini_y + circulo*5 + space);



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
