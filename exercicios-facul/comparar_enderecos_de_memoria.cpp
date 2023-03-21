/*
Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços de memória e exiba o maior endereço.
*/
#include <iostream>

using namespace std;

main(){
    int a = 5, b = 10;
// o endereco de A vai ser maior, pq a variavel A foi criada primeiro!
    if (&a > &b){
        cout << "O endereco de a eh maior, endereco: " << &a;
    }else{
        cout << "O endereco de b eh maior, endereco: " << &b;
    }
}