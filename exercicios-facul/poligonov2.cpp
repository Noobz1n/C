#include <iostream>
#include <math.h>
using namespace std;


main() {
    int lados;
    float lado, area;

    cout << "Digite a quantidade de lados: ";
    cin >> lados;
    cout << "Digite a medida do lado: ";
    cin >> lado;

    if (lados == 3) {
        area = (pow(lado, 2.0)) * (pow(3, 1/2)) / 4;
        cout << "A figura eh um triangulo." << endl;
        cout << "A area eh: " << area << endl;
    }
    if (lados == 4) {
        area = pow(lado, 2);
        cout << "A figuria eh um quadrado." << endl;
        cout << "A area eh: " << area << endl;
    }
    if (lados == 5) {
        cout << "A figura eh um pentagono." << endl;
    }
    if (lados < 3) {
        cout << "Nao eh um poligono.";
    }
    if (lados > 5) {
        cout << "poligono nao identificado";
    }


}