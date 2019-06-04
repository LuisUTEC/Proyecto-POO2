//
// Created by LCorderoP on 27/05/2019.
//


class Casilla{
private:
    int x;
    int y;
    bool disponible;
    color;
public:
    virtual void mostrarEstadoCasilla(){

    }


};

class CasillaCasa:public Casilla{
public:
    void mostrarEstadoCasilla() override {
        Casilla::mostrarEstadoCasilla();


    }
};

class CasillaInicio:public Casilla{
public:
    void mostrarEstadoCasilla() override {
        Casilla::mostrarEstadoCasilla();

    }
};

class CasillaRecorrido:public Casilla{
public:
    void mostrarEstadoCasilla() override {
        Casilla::mostrarEstadoCasilla();

    }
};
class CasillaZonaSegura:public Casilla{
public:
    void mostrarEstadoCasilla() override {
        Casilla::mostrarEstadoCasilla();

    }
};

class CasillaDestinoFinal:public Casilla{
public:
    void mostrarEstadoCasilla() override {
        Casilla::mostrarEstadoCasilla();

    }
};