/*
Elabore um programa que tenha uma função que receba 3 notas de um aluno como parâmetros e
uma letra. Se a letra for “A”, a função deverá calcular a média aritmética das notas do aluno; se for
“P”, deverá calcular a média ponderada, com pesos 5, 3 e 2. Retorne a média calculada para o
programa principal.
*/

#include <iostream>
#include <cstring>

using namespace std;

void media(string media, float nota1, float nota2, float nota3){
    float media_nota;
    if(media == "A"){
        media_nota = (nota1 + nota2 + nota3) / 3;
        cout << "Sua media aritmetica: " << media_nota;
    }
    if(media == "B"){
		media_nota = (nota1 + nota2 + nota3) / (5 + 3 + 2);
		cout << "Media ponderada: " << media_nota;
	}
}

main(){
    float nota1, nota2, nota3;
    string nome;

    cout << "Insira sua primeira nota: ";
    cin >> nota1;

    cout << "Insira sua segunda nota: ";
    cin >> nota2;

    cout << "Insira sua terceira nota: ";
    cin >> nota3;

    cout << "[A] - Media aritmetica" << endl;
	cout << "[B] - Media ponderada" << endl;
	cout << "Sua opcao: ";
    cin >> nome;
    
    media(nome, nota1, nota2, nota3);
}