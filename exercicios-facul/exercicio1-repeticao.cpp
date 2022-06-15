#include <iostream>
using namespace std;

/*
   Faça um programa que receba um número inteiro e mostre na se ele é positivo, negativo ou zero. Caso seja positivo exiba também seu antecessor e seu sucessor.
*/

main(){
    int num;
    cout << "Digite um numero qualquer: ";
    cin >> num;

    if (num < 0){
        cout << "Numero negativo.";
    } else {
        if (num == 0) {
            cout << "Zero.";
        } else {
            cout << "Positivo.";
            cout << "Sucessor de " << num << "eh " << num+1;
            cout << "Antecessor de " << num << "eh " << num-1;        
        }
    }
    
    


}