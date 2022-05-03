#include <iostream>
using namespace std;

/*

AGUDO < 90°
RETO == 90°
OBTUSO > 90°
INVALIDO < 0   ou   > 360
VALIDO ENTRE 0 E 360
se for valido, converter para radianos, formula R = G*(p/180)       ||   G = ANGULO EM GRAUS     e     R radianos
*/



main(){
    int ang;
    float rad, pi = 3.141592;

    cout << "Insira o valor do angulo: ";
    cin >> ang;

    
    
     if ((ang < 0) || (ang > 360)) {
            cout << "Invalido.";
        } else {
            if (ang < 90) {
        rad = ang * (pi / 180);
        cout << "Angulo agudo." << endl;
        cout << "Radianos: " << rad;
        }

        if (ang == 90) {
            rad = ang * (pi / 180);
            cout << "Angulo reto" << endl;
            cout << "Radianos: " << rad;
        }
    
        if (ang > 90) {
            rad = ang * (pi / 180);
            cout << "Angulo obtuso" << endl;
            cout << "Radianos: " << rad;
        }
    }
  

}