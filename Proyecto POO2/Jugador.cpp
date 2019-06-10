#include <iostream>
using namespace std;

class Jugador{
protected:
    string nombres[3];
    int color;
public:

    void insertarNombreyEscogerFicha() {
        for (int i = 1; i < 5; i++) {
            cout << "Inserte el nombre del jugador numero " << i << ":";
            cin >> nombres[i];
            cout << "Escoga el color del jugador: 1 para amarillo, 2 para rojo , 3 para azul o 4 para verde" << endl;
            cin >> color;
            if (color == 1) {

            }
            if (color == 2) {

            }
            if (color == 3) {

            }
            if (color == 4) {

            }

        }
    }
};

};
