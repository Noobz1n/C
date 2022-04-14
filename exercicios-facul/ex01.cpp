#include <iostream>
using namespace std;

/*
N = KG DE CAFE
P = CUSTO UNITARIO CAFE

B = KG DA BANANA
T = CUSTO UNITARIO BANANA
*/


main() {
	float n, p, b, t, somabanana, somacafe, total;
    cout << "Digite a quantidade de kg do cafe: ";
    cin >> n;
    cout << "Digite o custo unitario: ";
    cin >> p;
    somacafe = n * p;
	cout << "O cafe custou: " << somacafe << " reais" << endl;
	
    cout << "Digite a quantidade de kg da banana: ";
    cin >> b;
    cout << "Digite o custo unitario: ";
    cin >> t;
    somabanana = b * t;
    cout << "A banana custou: " << somabanana << " reais" << endl;
    total = somabanana + somacafe;
	
	cout << "Voce gastou ao todo no mercado: " << total << " reais" << endl;
}