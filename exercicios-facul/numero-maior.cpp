#include <iostream>
using namespace std;

main(){
    int n1, n2, n3;
    cout << "Digite um numero: ";
    cin >> n1;
    cout << "Digite outro numero: ";
    cin >> n2;
    cout << "Digite outro numero: ";
    cin >> n3;

    if ((n1 > n2) && (n1 > n3)) {
        cout << n1;
    }
    if ((n2 > n1 ) && (n2 > n3)) {
        cout << n2;
    }
    if ((n3 > n1) && (n3 > n2)) {
        cout << n3;
    }


}