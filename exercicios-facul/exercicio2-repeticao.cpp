#include <iostream>
using namespace std;

/*
    fazer o usuario digitar um numero para aparecer a tabuada do numero digitado
*/

main(){
    int num, aux = 0;

    cout << "Digite um numero para saber a tabuada: ";
    cin >> num;
    
    while(aux <= 10){
		cout << aux * num << endl;
		aux+=1;
	}
   
}