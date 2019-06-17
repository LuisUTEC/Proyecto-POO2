//
// Created by LCorderoP on 27/05/2019.
//
#include <SFML/Graphics.hpp>
using namespace sf;
class Casilla{
protected:
    int x;
    int y;
    bool disponible; //1 = disponible, 0 = no disponible
    int color; //0 = amarillo, 1 = rojo, 2 = verde, 3 = azul
public:
    Casilla(int pos_x, int pos_y){
        x = pos_x;
        y = pos_y;
    }
    virtual CircleShape mostrarEstadoCasilla(){
        CircleShape Cas(20.f);
        Cas.setOutlineThickness(5.f);
        switch (color){
            case 0: //amarillo
                Cas.setFillColor(sf::Color(231, 235, 1));
                Cas.setOutlineColor(sf::Color(0, 0, 0));
                break;
            case 1: //rojo
                Cas.setFillColor(sf::Color(252, 0, 0));
                Cas.setOutlineColor(sf::Color(0, 0, 0));
                break;
            case 2: //verde
                Cas.setFillColor(sf::Color(0, 252, 0));
                Cas.setOutlineColor(sf::Color(0, 0, 0));
                break;
            case 3: //azul
                Cas.setFillColor(sf::Color(0, 0, 252));
                Cas.setOutlineColor(sf::Color(0, 0, 0));
                break;
        }
        return Cas;
    }
    int getX() const {
        return x;
    }

    void setX(int x) {
        Casilla::x = x;
    }

    int getY() const {
        return y;
    }

    void setY(int y) {
        Casilla::y = y;
    }

    bool isDisponible() const {
        return disponible;
    }

    void setDisponible(bool disponible) {
        Casilla::disponible = disponible;
    }

    int getColor() const {
        return color;
    }

    void setColor(int color) {
        Casilla::color = color;
    }

    ~Casilla(){}

};

class CasillaCasa:public Casilla{
public:

    CircleShape mostrarEstadoCasilla() override {

    }
};

class CasillaInicio:public Casilla{
public:
    CircleShape mostrarEstadoCasilla() override {

    }
};

class CasillaRecorrido:public Casilla{
public:
    CircleShape mostrarEstadoCasilla() override {
        Casilla::mostrarEstadoCasilla().setFillColor(sf::Color(255, 255, 255));
    }
};
class CasillaZonaSegura:public Casilla{
public:
    CircleShape mostrarEstadoCasilla() override {

    }
};

class CasillaDestinoFinal:public Casilla{
public:
    CircleShape mostrarEstadoCasilla() override {

    }
};