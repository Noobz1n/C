#include <iostream>
using namespace std;

/*
MACAS = 0.30 CADA SE FOR MENOS QUE UMA DUZIA(12)
MACAS = 0.25 CADA SE FOR COMRPRADO 12 OU MAIS
PEDIR PRO USUARIO DIGITAR QNTS MACAS COMPROU E MOSTRAR O VALOR TOTAL DA COMPRA
*/



main(){
    float macas, somamacas;
    cout << "Digite quantas macas foram compradas: ";
    cin >> macas;
    if (macas < 12) {
        somamacas = macas * 0.30;
        cout << "O total em RS foi: " << somamacas;
    } else {
        somamacas = macas * 0.25;
        cout << "O total em RS foi: " << somamacas;
    }


}