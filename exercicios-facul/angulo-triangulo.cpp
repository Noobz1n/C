#include <iostream>
using namespace std;

main(){
    int ang1, ang2, ang3;

    /*

        Escreva	 um	 programa	 que	 leia	 o	 valor	 de	 3	 ângulos	 de	 um	 triângulo	 e	
        escreva	 se	 o	 triângulo	 é	 Acutângulo,	 Retângulo	 ou	 Obtusângulo.	 Sendo	
     que:	
        − Triângulo	Retângulo:	possui	um	ângulo	reto.	(igual	a	90º)
        − Triângulo	Obtusângulo:	possui	um	ângulo	obtuso.	(maior	que90º)	
        − Triângulo	Acutângulo:	possui	três	ângulos	agudos.	(menor	que	90º)

    */

    cout << "Digite o primeiro angulo do triangulo: ";
    cin >> ang1;
    cout << "Digite o segundo angulo do triangulo: ";
    cin >> ang2;
    cout << "Digite o terceiro angulo do triangulo: ";
    cin >> ang3;

    if ((ang1 == 90) || (ang2 == 90) || (ang3 == 90)) {
        cout << "Triangulo Retangulo." << endl;
    }
    if ((ang1 > 90) || (ang2 > 90) || (ang3 > 90)) {
        cout << "Triangulo Obtusangulo." << endl;
    }
    if ((ang1 < 90) && (ang2 < 90) && (ang3 < 90)) {
        cout << "Triangulo Acutangulo.";
    }






}