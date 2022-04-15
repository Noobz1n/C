#include <iostream>
using namespace std;

/*

Anacleto tem 1,50 metros e cresce 2 centímetros por ano, enquanto Felisberto tem 1,10
metros e cresce 3 centímetros por ano. Faça um programa que calcule e mostre quantos anos serão
necessários para que Felisberto seja maior que Anacleto.

*/




main () {
    int ano = 0;
    float a = 1.5, f = 1.1;
    while (f < a) {
        ano = ano + 1;
        a = a + 0.02;
        f = f + 0.03;
    }
    cout << "Demorou " << ano << " anos para que feliberto seja maior que anacleto.";

}