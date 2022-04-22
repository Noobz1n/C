#include <iostream>
using namespace std;

/*

Escreva	 um	 programa que	 leia	 as	 medidas	 dos	 lados	 de	 um	 triângulo	 e	
escreva	se	ele	é	Equilátero,	Isósceles	ou	Escaleno.	Sendo	que:	
− Triângulo	Equilátero:	possui	os	3	lados	iguais.	
− Triângulo	Isóscele:	possui	2	lados	iguais.	
− Triângulo	Escaleno:	possui	3	lados	diferentes.

*/

main(){
    int n1, n2, n3;
    cout << "LADO 1: ";
    cin >> n1;
    cout << "LADO 2: ";
    cin >> n2;
    cout << "LADO 3: ";
    cin >> n3;

    if ((n1 == n2) && (n2 == n3)) {
        cout << "Trianquilo Equilatero." << endl;
    } else {
        if ((n1 == n2) || (n3 == n1) || (n3 == n2)) {
            cout << "Triangulo Isoscele";
        } else {
            cout << "Triangulo escaleno";
        }
    }

}