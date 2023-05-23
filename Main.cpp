#include <iostream>
#include "EnemigoFinal.h"
#include "Personaje.h"
#include <windows.h>
#include <ctime>

// Creamos Personaje
Personaje heroe1(500, 30, 0, 0, "POPEYE");
Personaje enemigo2(100, 20, 0, 0, "MATRIX");
Personaje enemigo3(100, 20, 0, 0, "DELFIN");
Personaje enemigo4(100, 20, 0, 0, "AMPETER");
Personaje enemigo5(100, 20, 0, 0, "SPURSITO");

//EnemigoFinal
EnemigoFinal enemigoFinal(200, 20, 4, 0, "MESSI", 35, 70);

// rand posciones
int numAleX() {
    int posicionX = (rand() % 4) + 1;
    return posicionX;
}
int numAleY() {
    int posicionY = (rand() % 9) + 1;
    return posicionY;
}

// TABLERO 
char tablero[10][5] = {
    {'0', '0', '0', '0', '0'},
    {'0', '0', '0', '0', '0'},
    {'0', '0', '0', '0', '0'},
    {'0', '0', '0', '0', '0'},
    {'0', '0', '0', '0', '0'},
    {'0', '0', '0', '0', '0'},
    {'0', '0', '0', '0', '0'},
    {'0', '0', '0', '0', '0'},
    {'0', '0', '0', '0', '0'},
    {'0', '0', '0', '0', '0'}
};


void intro() { 
    cout << "\033[1;32m";
    cout << "Empieza el juego, jugaras con tu hereo " << heroe1.getName() << " que esta situado " << heroe1.getPosicionX() << " " << heroe1.getPosicionY() << "\n";
    cout << "\033[0m";
    cout << "\033[34m";
    cout << "Habra estos 4 enemigos:  " << enemigo2.getName() << "   " << enemigo3.getName() << "   " << enemigo4.getName() << "   " << enemigo4.getName() 
        << " se situaran en el tablero aleatoriamente" << "\n";
    cout << "\033[0m"; 
    cout << "Los enemigos y la meta serAn invisible y se ubicaran aleatoriament. " << "\n";

    cout << "                                                         EMPIEZE EL JUEGO!!                                             " << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------" << "\n";
}

void posicionesEnemigos(Personaje& enemigo) {

   // if (enemigo.getPosicionX == enemigo.getPosicionX) {
        enemigo.setPosicionX(numAleX());
        enemigo.setPosicionY(numAleY());
   // }
    
}


int main() { 
    srand(time(0));
    //INTRODUCION 
    intro(); 
    //BUCLE   
   //PRINT ARRAY
    for (int y = 0; y < 10; y++) {
        for (int x = 0; x < 5; x++) {
            cout << tablero[y][x];
            cout << "\t";
        }

        cout << endl;
    }

    //POSCION HEREO
    heroe1.setPosicionX(numAleX());
    cout << "El hereo empezara en X: " << heroe1.getPosicionX()<< " Y: " << heroe1.getPosicionY() << "\n";

    //POSCIONES ENEMIGO.
    posicionesEnemigos(enemigo2);
    posicionesEnemigos(enemigo3);
    posicionesEnemigos(enemigo4);
    posicionesEnemigos(enemigo5);
    cout << " ENEMIGO X: " << enemigo2.getPosicionX() << " Y: " << enemigo2.getPosicionY() << "\n";
    cout << " ENEMIGO X: " << enemigo3.getPosicionX() << " Y: " << enemigo3.getPosicionY() << "\n" ;
    cout << " ENEMIGO X: " << enemigo4.getPosicionX() << " Y: " << enemigo4.getPosicionY() << "\n";
    cout << " ENEMIGO X: " << enemigo5.getPosicionX() << " Y: " << enemigo5.getPosicionY() << "\n";
    
     cout << (tablero[heroe1.getPosicionX()][heroe1.getPosicionY()] = ' * ');
     cout << (tablero[enemigo2.getPosicionX()][enemigo2.getPosicionY()] = '  ');
     
  
    

     
     
}

