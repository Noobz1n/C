#include <iostream>
using namespace std;

/* 
DIARIA = 130 + 8.50

Um hotel cobra R$ 130,00 a diária e mais uma taxa de serviços. A taxa é de:
R$ 8,50 por diária, se o número de diárias for maior que 15;
R$ 10,00 por diária, se o número de diárias for igual a 15;
R$ 12,00 por diária, se o número de diárias for menor que 15.
Construa um programa que leia a quantidade de dias que o cliente passou no hotel e exiba quanto foi seu gasto após a estadia.
*/

main(){
    int diaria;
    float total; 

    cout << "Informe quantos dias voce passou no hotel: ";
    cin >> diaria;

    if (diaria > 15) {
        total = (130.00 * diaria) + (diaria * 8.50);
        cout << "O valor a pagar sera: " << total << endl;
    }

    if (diaria == 15) {
         total = (130.00 * diaria) + (diaria * 10.00);
         cout << "O valor a pagar sera: " << total << endl;
    }

    if (diaria < 15) {
        total = (130.00 * diaria) + (diaria * 12.00);
        cout << "O valor a pagar sera: " << total << endl;
    }


}