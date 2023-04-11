/*
Escreva um programa que possua uma função que receba um número inteiro positivo n. Calcule e
retorne o somatório de 1 até n: 1 + 2 + 3 + ... + n.
*/

#include <iostream>

using namespace std;


void somatorio(int n){
    int i = 0, numero = 0;
    for(i; i <= n; i++){
        numero = numero + i;
        cout << numero << endl;
    }
}

main(){
    int number;

    cout << "Insira o numero que deseja o somatorio: ";
    cin >> number;

    somatorio(number);

}