#include <iostream>
using namespace std;

int main(){
	int i, n1, n2, aux;
	cout << "Digite o n1: ";
	cin >> n1;
	cout << "Digite o n2: ";
	cin >> n2;
	for (i = 1; i < n2; i++) {
		aux = i * 7;
		if (aux > n1 && aux < n2) {
			cout << " " << aux;
		}
	}
}