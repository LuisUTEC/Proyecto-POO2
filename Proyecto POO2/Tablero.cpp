//
// Created by LCorderoP on 27/05/2019.
//
#include <iostream>
#include "Casilla.cpp"
#include <SFML/Graphics.hpp>

using namespace std;

class Tablero{
private:
    Casilla* mesa[11][11];
public:
    Tablero() {
        Casilla* Casa_1_amarillo = new CasillaCasa(1,1);
        Casilla* Casa_2_amarillo = new CasillaCasa(2,1);
        Casilla* Casa_3_amarillo = new CasillaCasa(1,2);
        Casilla* Casa_4_amarillo = new CasillaCasa(2,2);
        Casilla* Casa_1_rojo = new CasillaCasa(8,1);
        Casilla* Casa_2_rojo = new CasillaCasa(9,1);
        Casilla* Casa_3_rojo = new CasillaCasa(8,2);
        Casilla* Casa_4_rojo = new CasillaCasa(9,2);
        Casilla* Casa_1_verde = new CasillaCasa(1,8);
        Casilla* Casa_2_verde = new CasillaCasa(2,8);
        Casilla* Casa_3_verde = new CasillaCasa(1,9);
        Casilla* Casa_4_verde = new CasillaCasa(2,9);
        Casilla* Casa_1_azul = new CasillaCasa(8,8);
        Casilla* Casa_2_azul = new CasillaCasa(9,8);
        Casilla* Casa_3_azul = new CasillaCasa(8,9);
        Casilla* Casa_4_azul = new CasillaCasa(9,9);

        Casilla* Recorrido01 = new CasillaRecorrido(1,4);
        Casilla* Recorrido02 = new CasillaRecorrido(2,4);
        Casilla* Recorrido03 = new CasillaRecorrido(3,4);
        Casilla* Recorrido04 = new CasillaRecorrido(4,4);
        Casilla* Recorrido05 = new CasillaRecorrido(0,5);
        Casilla* Recorrido06 = new CasillaRecorrido(0,6);
        Casilla* Recorrido07 = new CasillaRecorrido(1,6);
        Casilla* Recorrido08 = new CasillaRecorrido(2,6);
        Casilla* Recorrido09 = new CasillaRecorrido(3,6);
        Casilla* Recorrido10 = new CasillaRecorrido(4,6);
        Casilla* Recorrido11 = new CasillaRecorrido(6,6);
        Casilla* Recorrido12 = new CasillaRecorrido(7,6);
        Casilla* Recorrido13 = new CasillaRecorrido(8,6);
        Casilla* Recorrido14 = new CasillaRecorrido(9,6);
        Casilla* Recorrido15 = new CasillaRecorrido(10,5);
        Casilla* Recorrido16 = new CasillaRecorrido(6,4);
        Casilla* Recorrido17 = new CasillaRecorrido(7,4);
        Casilla* Recorrido18 = new CasillaRecorrido(8,4);
        Casilla* Recorrido19 = new CasillaRecorrido(9,4);
        Casilla* Recorrido20 = new CasillaRecorrido(10,4);
        Casilla* Recorrido21 = new CasillaRecorrido(4,0);
        Casilla* Recorrido22 = new CasillaRecorrido(4,1);
        Casilla* Recorrido23 = new CasillaRecorrido(4,2);
        Casilla* Recorrido24 = new CasillaRecorrido(4,3);
        Casilla* Recorrido25 = new CasillaRecorrido(5,0);
        Casilla* Recorrido26 = new CasillaRecorrido(6,1);
        Casilla* Recorrido27 = new CasillaRecorrido(6,2);
        Casilla* Recorrido28 = new CasillaRecorrido(6,3);
        Casilla* Recorrido29 = new CasillaRecorrido(4,9);
        Casilla* Recorrido30 = new CasillaRecorrido(4,8);
        Casilla* Recorrido31 = new CasillaRecorrido(4,7);
        Casilla* Recorrido32 = new CasillaRecorrido(6,7);
        Casilla* Recorrido33 = new CasillaRecorrido(5,10);
        Casilla* Recorrido34 = new CasillaRecorrido(6,10);
        Casilla* Recorrido35 = new CasillaRecorrido(6,9);
        Casilla* Recorrido36 = new CasillaRecorrido(6,8);

        Casilla* Inicio_Amarillo = new CasillaInicio(0);
        Casilla* Inicio_Rojo     = new CasillaInicio(1);
        Casilla* Inicio_Verde    = new CasillaInicio(2);
        Casilla* Inicio_Azul     = new CasillaInicio(3);

        Casilla* SeguroAmarillo_1 = new CasillaZonaSegura(0,1);
        Casilla* SeguroAmarillo_2 = new CasillaZonaSegura(0,2);
        Casilla* SeguroAmarillo_3 = new CasillaZonaSegura(0,3);
        Casilla* SeguroRojo_1     = new CasillaZonaSegura(1,1);
        Casilla* SeguroRojo_2     = new CasillaZonaSegura(1,2);
        Casilla* SeguroRojo_3     = new CasillaZonaSegura(1,3);
        Casilla* SeguroVerde_1    = new CasillaZonaSegura(2,1);
        Casilla* SeguroVerde_2    = new CasillaZonaSegura(2,2);
        Casilla* SeguroVerde_3    = new CasillaZonaSegura(2,3);
        Casilla* SeguroAzul_1     = new CasillaZonaSegura(3,1);
        Casilla* SeguroAzul_2     = new CasillaZonaSegura(3,2);
        Casilla* SeguroAzul_3     = new CasillaZonaSegura(3,3);

        Casilla* DestinoFinal_Amarillo = new CasillaDestinoFinal(0);
        Casilla* DestinoFinal_Rojo = new CasillaDestinoFinal(1);
        Casilla* DestinoFinal_Verde = new CasillaDestinoFinal(2);
        Casilla* DestinoFinal_Azul = new CasillaDestinoFinal(3);

        mesa[1][1] = Casa_1_amarillo;
        mesa[2][1] = Casa_2_amarillo;
        mesa[1][2] = Casa_3_amarillo;
        mesa[2][2] = Casa_4_amarillo;
        mesa[8][1] = Casa_1_rojo;
        mesa[9][1] = Casa_2_rojo;
        mesa[8][2] = Casa_3_rojo;
        mesa[9][2] = Casa_4_rojo;
        mesa[1][8] = Casa_1_verde;
        mesa[2][8] = Casa_2_verde;
        mesa[1][9] = Casa_3_verde;
        mesa[2][9] = Casa_4_verde;
        mesa[8][8] = Casa_1_azul;
        mesa[9][8] = Casa_2_azul;
        mesa[8][9] = Casa_3_azul;
        mesa[9][9] = Casa_4_azul;
        mesa[4][5] = DestinoFinal_Amarillo;
        mesa[5][4] = DestinoFinal_Rojo;
        mesa[5][6] = DestinoFinal_Azul;
        mesa[6][5] = DestinoFinal_Verde;
        mesa[1][5] = SeguroAmarillo_1;
        mesa[2][5] = SeguroAmarillo_2;
        mesa[3][5] = SeguroAmarillo_3;
        mesa[5][1] = SeguroRojo_1;
        mesa[5][2] = SeguroRojo_2;
        mesa[5][3] = SeguroRojo_3;
        mesa[5][1] = SeguroVerde_1;
        mesa[5][2] = SeguroVerde_2;
        mesa[5][3] = SeguroVerde_3;
        mesa[1][5] = SeguroAzul_1;
        mesa[2][5] = SeguroAzul_2;
        mesa[3][5] = SeguroAzul_3;
        mesa[1][4] = Recorrido01;
        mesa[2][4] = Recorrido02;
        mesa[3][4] = Recorrido03;
        mesa[4][4] = Recorrido04;
        mesa[0][5] = Recorrido05;
        mesa[0][6] = Recorrido06;
        mesa[1][6] = Recorrido07;
        mesa[2][6] = Recorrido08;
        mesa[3][6] = Recorrido09;
        mesa[4][6] = Recorrido10;
        mesa[6][6] = Recorrido11;
        mesa[7][6] = Recorrido12;
        mesa[8][6] = Recorrido13;
        mesa[9][6] = Recorrido14;
        mesa[10][5] = Recorrido15;
        mesa[6][4] = Recorrido16;
        mesa[7][4] = Recorrido17;
        mesa[8][4] = Recorrido18;
        mesa[9][4] = Recorrido19;
        mesa[10][4] = Recorrido20;
        mesa[4][0] = Recorrido21;
        mesa[4][1] = Recorrido22;
        mesa[4][2] = Recorrido23;
        mesa[4][3] = Recorrido24;
        mesa[5][0] = Recorrido25;
        mesa[6][1] = Recorrido26;
        mesa[6][2] = Recorrido27;
        mesa[6][3] = Recorrido28;
        mesa[4][9] = Recorrido29;
        mesa[4][8] = Recorrido30;
        mesa[4][7] = Recorrido31;
        mesa[6][7] = Recorrido32;
        mesa[5][10] = Recorrido33;
        mesa[6][10] = Recorrido34;
        mesa[6][9] = Recorrido35;
        mesa[6][8] = Recorrido36;
        mesa[0][4] = Inicio_Amarillo;
        mesa[6][0] = Inicio_Rojo;
        mesa[4][10] = Inicio_Verde;
        mesa[10][6] = Inicio_Azul;
    }

    void mostrar(){
        RenderWindow window(VideoMode(1000, 650), "Ludo");
        while (window.isOpen())
        {
            Event event;
            while (window.pollEvent(event))
            {
                if (event.type == Event::Closed)
                    window.close();
            }
            window.clear(sf::Color::White);
            for (int i = 0; i < 11; i++) {
                for (int j = 0; j < 11; j++) {
                    window.draw(mesa[i][j]->mostrarEstadoCasilla());
                }
            }
            window.display();
        }
    }

    Casilla* getMesa(int x, int y){
        return mesa[x][y];
    }
};