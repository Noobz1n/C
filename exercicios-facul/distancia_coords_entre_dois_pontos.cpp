/*
Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). Em seguida, declare e leia do 
teclado dois pontos e exiba a distância entre eles
*/

#include <iostream>
#include <cmath>

using namespace std;

typedef struct {
    float x1, x2, y1, y2, calc_distancia;
}coordenadas;

main(){
    coordenadas coords;
    cout << "Digite o x2: ";
    cin >> coords.x2;

    cout << "Digite o y2: ";
    cin >> coords.y2;

    cout << "Digite o x1: ";
    cin >> coords.x1;

    cout << "Digite o y1: ";
    cin >> coords.y1;

    coords.calc_distancia = sqrt(pow((coords.x2 - coords.x1), 2.0) + pow((coords.y2 - coords.y1), 2.0));

    cout << "A distancia entre os pontos (" << coords.x1 << "," << coords.y1 << "), (" << coords.x2 << "," << coords.y2 << ") eh igual a: " << coords.calc_distancia;
}