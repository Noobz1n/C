/*
Faça um programa utilizando structs onde o usuário irá informar os dados (nome, base e altura) de três triângulos, o
programa irá listar as informações das três figuras (nome, base, altura e área) e por último informará o nome da maior figura e
sua área
*/


#include <iostream>
#include <cstring>

using namespace std;


typedef struct{
	string nome;
	float base, alt, area;
}triangulo;



main(){
	triangulo t[3];
	int i = 0;
	
	for(i; i<3; i++){
		cout << "Insira o nome do triangulo: ";
		cin.ignore();
		cin >> t[i].nome;
		cin.ignore();
		
		cout << "Insira a base do triangulo: ";
		cin >> t[i].base;
		
		cout << "Insira a altura do triangulo: ";
		cin >> t[i].alt;
		
		t[i].area =  (t[i].base * t[i].alt) / 2.0;
	}
	if ((t[0].area > t[1].area) && (t[0].area > t[1].area)) {
        cout << "Nome da figura: " << t[0].nome << endl;
        cout << "Area: " << t[0].area;
    }
    if ((t[1].area > t[0].area ) && (t[1].area > t[2].area)) {
        cout << "Nome da figura; " << t[1].nome << endl;
        cout << "Area: " << t[1].area;
    }
    if ((t[2].area > t[0].area) && (t[2].area > t[1].area)) {
        cout << "Nome da figura: " << t[2].nome << endl;
        cout << "Area: " << t[2].area;
    }
}