/*
Escreva um programa que possua uma função que receba por parâmetro uma temperatura em
graus Fahrenheit e a retorne convertida em graus Celsius. A fórmula de conversão é: C = (F – 32) *
(5/9), sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
*/
#include <iostream>

using namespace std;

void conversao(float temperatura){
    float c;

    c = (temperatura - 32) * 5/9;
    
    cout << "A temperatura em Celius eh: " << c;
}

main(){
    float f;

    cout << "Insira a temperatura em Fahrenheit: ";
    cin >> f;

    conversao(f);
}