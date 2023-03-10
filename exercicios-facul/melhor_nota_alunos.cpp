/*
Crie um programa utilizando struct que cadastre 3 alunos. Cada aluno possuirá nome, matrícula, nota 1, nota 2 e média. Feito
o cadastro, calcule e armazene a média dos 3 alunos no local adequado. Por fim, exiba as informações dos 3 alunos e também
o nome de quem teve a melhor nota e qual foi esta nota.
*/

#include <iostream>
#include <cstring>

using namespace std;

typedef struct {
    string nome, matricula;
    float nota1, nota2, media;
}alunos;

main(){
    int i = 0;
    string nome_maior_media;
    float maior_media;
    alunos alu[3];

    for (i; i<3; i++){
        cout << "Insira seu nome: ";
        cin.ignore();
        cin >> alu[i].nome;
        
        

        cout << "Insira sua matricula: ";
        cin.ignore();
        cin >> alu[i].matricula;
		
        

        cout << "Insira sua primeira nota: ";
        cin >> alu[i].nota1;

        cout << "Insira sua segunda nota: ";
        cin >> alu[i].nota2;
        
        cout << endl;
        
        alu[i].media = (alu[i].nota1 + alu[i].nota2) / 2.0;
    }
    i = 0;
    for (i; i<3; i++){
		cout << "Nome: " << alu[i].nome << endl;
        cout << "Matricula: " << alu[i].matricula << endl;
        cout << "Primeira nota: " << alu[i].nota1 << endl;
        cout << "Segunda nota: " << alu[i].nota2 << endl;
        cout << "Media: " << alu[i].media << endl;
        cout << endl;
	}
	i = 0;
	maior_media = alu[0].media;
	for(i; i<3; i++){
		if (alu[i].media > maior_media) {
			maior_media = alu[i].media;
			nome_maior_media = alu[i].nome;
		}
	}
	cout << "Aluno que obteve a maior media: " << nome_maior_media << endl;
	cout << "Maior media: " << maior_media;
    
}