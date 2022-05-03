#include <iostream>
using namespace std;

main(){
    int litro, km, toneladas;
    int conversaolitro, conversaokm, conversaotoneladas;

    cout << "Digite a quantidade em liro: ";
    cin >> litro;
    conversaolitro = litro * 1000;
    cout << conversaolitro << " milimetros" << endl;

    cout << "Digite a quantidade em km: ";
    cin >> km;
    conversaokm = km * 1000;
    cout << conversaokm << " metros" << endl;

    cout << "Digite a quantidade em toneladas: ";
    cin >> toneladas;
    conversaotoneladas = toneladas * 1000000;
    cout << conversaotoneladas << " gramas" << endl;



}