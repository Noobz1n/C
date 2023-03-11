/*
Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). Em seguida, declare e leia do 
teclado um ponto e exiba a distância dele até a origem das coordenadas, isto é, a posição (0,0).
*/

#include <iostream>
#include <cmath>

using namespace std;

typedef struct {
	float x2, y2, calc_distancia;
}coordenadas;


main(){
	coordenadas coords;
	cout << "Digite o ponto x: ";
	cin >> coords.x2;
	
	cout << "Digite o ponto y: ";
	cin >> coords.y2; 
	
	coords.calc_distancia = sqrt(pow((coords.x2 - 0), 2.0) + pow((coords.y2 - 0), 2.0));
	cout << "A distancia entre (" << coords.x2 << "," << coords.y2 << ") pro ponto de origem (0,0) eh igual a: " << coords.calc_distancia;
}