#include <iostream>
using namespace std;

main(){
	float m, t, c;
	cout << "Massa do material em gramas: ";
	cin >> m;
	
	while (m > 0.05) {
		m = m / 2;
		c = c + 1;
 	}
 	
 	t = c * 50;
 	cout << t << "s";
 	
}