#include <iostream>
using namespace std;

/*

(1 ponto) Escreva um programa que tome como entrada um determinado horário, expresso por hora
(valor inteiro de 0 a 23), minutos (valor de 0 a 59) e segundo (valor de 0 a 59). Calcule e imprima o
horário digitado, acrescido de 55 segundos.

*/

main(){
	int hrs, min, seg;
    cout << "Digite a hora: ";
    cin >> hrs;
    cout << "Digite os mins: ";
    cin >> min;
    cout << "Digite os segundos: ";
    cin >> seg;
    seg = seg + 55;
	
	if (seg>59) {
		min = min + 1;
		seg = seg - 60;
	}
	if (min > 60) {
		hrs = hrs + 1;
		min = min + 1;
		if (hrs >= 24) {
			hrs = hrs - 24;
		}
		cout << "Hora: " << hrs << ":" << min << ":" << seg << endl;
		
	} else {
		cout << "Hora: " << hrs << ":" << min << ":" << seg << endl;
	}
}