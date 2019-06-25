//
// Created by LCorderoP on 27/05/2019.
//
#include <SFML/Graphics.hpp>
using namespace sf;
int ini_x = 20;
int ini_y = 25;
int space = 5;
int circulo = 50;

class Casilla{
protected:
    int x;
    int y;
    bool disponible; //1 = disponible, 0 = no disponible
    int color; //0 = amarillo, 1 = rojo, 2 = verde, 3 = azul

public:
    Casilla(){
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
    CasillaCasa(int pos_x, int pos_y) : Casilla() { x = pos_x; y = pos_y;}
    CircleShape mostrarEstadoCasilla() override {
        CircleShape Cas = Casilla::mostrarEstadoCasilla();
        if((x==2)||(x==9)) {
            if ((y==2)||(y==9)){Cas.setPosition(ini_x + circulo * x + space, ini_y + circulo * y + space);}
            else               {Cas.setPosition(ini_x + circulo * x + space, ini_y + circulo * y);}
        }
        else{
            if ((y==2)||(y==9)){Cas.setPosition(ini_x + circulo * x, ini_y + circulo * y + space);}
            else               {Cas.setPosition(ini_x + circulo * x, ini_y + circulo * y);}
        }
        return Cas;
    }
};

class CasillaInicio:public Casilla{
public:
    CasillaInicio(int c) : Casilla() {color=c;}

    CircleShape mostrarEstadoCasilla() override {
        CircleShape Cas = Casilla::mostrarEstadoCasilla();
        switch (color){
            case 0: //amarillo
                Cas.setPosition(space,ini_y + circulo*4 + space);
                break;
            case 1: //rojo
                Cas.setPosition(circulo*6 + space,ini_y + space);
                break;
            case 2: //verde
                Cas.setPosition(circulo*4 + space, ini_y + circulo*10 + space);
                break;
            case 3: //azul
                Cas.setPosition(circulo*10 + space,ini_y + circulo*6 + space);
                break;
        }
        return Cas;

    }
};

class CasillaRecorrido:public Casilla{
public:
    CasillaRecorrido(int pos_x, int pos_y) : Casilla() { x = pos_x; y = pos_y;}
    CircleShape mostrarEstadoCasilla() override {
        CircleShape Cas = Casilla::mostrarEstadoCasilla();
        Cas.setFillColor(sf::Color(255, 255, 255));
        Cas.setPosition(circulo*x + space,ini_y + circulo*y + space);
        return Cas;
    }
};

class CasillaZonaSegura:public Casilla{
public:
    CasillaZonaSegura(int c, int pos) : Casilla() { x = pos; color = c;}
    CircleShape mostrarEstadoCasilla() override {
        CircleShape Cas = Casilla::mostrarEstadoCasilla();
        switch (color){
            case 0: //amarillo
                Cas.setPosition(circulo*x + space,ini_y + circulo*5 + space);
                break;
            case 1: //rojo
                Cas.setPosition(circulo*5 + space,ini_y + circulo*x + space);
                break;
            case 2: //verde
                Cas.setPosition(circulo*5 + space,ini_y + circulo*(x+6) + space);
                break;
            case 3: //azul
                Cas.setPosition(circulo*(x+6) + space,ini_y + circulo*5 + space);
                break;
        }
        return Cas;
    }
};

class CasillaDestinoFinal:public Casilla{
public:
    CasillaDestinoFinal(int c) : Casilla() { color = c;}
    CircleShape mostrarEstadoCasilla() override {
        CircleShape Cas = Casilla::mostrarEstadoCasilla();
        switch (color){
            case 0: //amarillo
                Cas.setPosition(circulo*4 + space,ini_y + circulo*5 + space);
                break;
            case 1: //rojo
                Cas.setPosition(circulo*5 + space,ini_y + circulo*6 + space);
                break;
            case 2: //verde
                Cas.setPosition(circulo*5 + space,ini_y + circulo*4 + space);
                break;
            case 3: //azul
                Cas.setPosition(circulo*6 + space,ini_y + circulo*5 + space);
                break;
        }
    }
};