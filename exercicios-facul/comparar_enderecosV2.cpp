/*
Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do teclado. Em seguida, compare seus 
endereços e exiba o conteúdo do maior endereço
*/
#include <iostream>

using namespace std;


main(){
    int a, b;

    cout << "Insira um valor para A: ";
    cin >> a;

    cout << "Insira um valor para B: ";
    cin >> b;

    if (&a > &b){
        cout << "A tem o maior endereco." << endl;
        cout << "Endereco: " << &a << endl;
        cout << "Conteudo: " << a;
    }else{
        cout << "B tem o maior endereco." << endl;
        cout << "Endereco: " << &b << endl;
        cout << "Conteudo: " << b;
    }
}