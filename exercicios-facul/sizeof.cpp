#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;



typedef struct {
  string nome;
	int matricula;
	float nota1, nota2, media; 	
}aluno;



main(){
	aluno alunos;
	
	int inteiro;
	float real;
	int n1 = 10;
	int n[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	
	cout << sizeof(inteiro) << endl;
	cout << sizeof(real) << endl;
	cout << sizeof(n1) << endl;
	cout << sizeof(n) << endl;
	cout << sizeof(alunos);
	
	
	
}
