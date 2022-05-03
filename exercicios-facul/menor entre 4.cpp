#include <iostream>
using namespace std;

main(){
    int n1, n2, n3, n4;
    
    cout << "Digite o primeiro numero: ";
    cin >> n1;
    cout << "Digite o segundo numero: ";
    cin >> n2;
    cout << "Digite o terceiro numero: ";
    cin >> n3;
    cout << "Digite o quarto numero: ";
    cin >> n4;

    if ((n1 < n2 ) && (n1 < n3) && (n1 < n3)) {
        cout << "O menor numero eh: " << n1 << endl;
    }
    if ((n2 < n1) && (n2 < n3) && (n2 < n4)) {
        cout << "O menor numero eh: " << n2 << endl;
    }
    if ((n3 < n1) && (n3 < n2) && (n3 < n4)) {
        cout << "O menor numero eh: " << n3 << endl;
    }
    if ((n4 < n1) && (n4 < n2) && (n4 < n3)) {
        cout << "O menor numero eh: " << n4 << endl;
    }








}