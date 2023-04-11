/*
Escreva um programa com duas funções que calculem o volume e a área de uma esfera.
V = 4/3*Pi*r³
A = 4*Pi*r²
Em que Pi = 3,14. O valor do raio r deve ser passado por parâmetro para cada função e a mesma
retornar o valor calculado para a função principal. 
*/

#include <iostream>
#include <cmath>

using namespace std;

void calcVolume(float valorraio){
    float pi = 3.14, volume = 0;

    volume = ((4.0/3.0) * (pow(valorraio, 3)));

    cout << "Valor do volume: " << volume << endl;
}


void calcArea(float valorraio){
    float pi = 3.14, area = 0;

    area = 4.0 * ((pow(valorraio, 2)));

    cout << "Valor da area: " << area;
}


main(){
    float raio;


    cout << "Insira o valor do raio: ";
    cin >> raio;

    calcVolume(raio);
    calcArea(raio);
}