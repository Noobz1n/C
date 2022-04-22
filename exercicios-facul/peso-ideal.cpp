#include <iostream>
using namespace std;

/*

6. Tendo	 como	 entrada	 a	 altura	 e	 o	 sexo	 (codificado	 da	 seguinte	 forma:	
1:feminino	 	 2:masculino)	 de	 uma	 pessoa,	 construa	 um	 programa	 que	
calcule	e	imprima	seu	peso	ideal,	utilizando	as	seguintes	
Fórmulas:	
- para	homens:	(72.7	*	Altura)	– 58	
- para	mulheres:	(62.1	*	Altura)	– 44.7	

*/



main(){
    float altura, soma;
    char s;
    
    cout << "Digite sua altura: ";
    cin >> altura;
    cout << "Digite o seu sexo: ";
    cin >> s;
    

    if (s == 'm') {
        soma = (72.7 * altura) - 58;
        cout << "O peso ideal eh: " << soma;
    }
    if (s == 'f') {
        soma = (62.1 * altura) - 44.7;
        cout << "O peso ideal eh: " << soma;
    }
    if ((s != 'f') && (s != 'm')) {
        cout << "Algo de errado. Tente novamente!";
    }

/* 
OUTRA OPÇÃO:
	switch(s){
		case 'm':
			soma = (72.7 * altura) - 58;
			cout << "O peso ideal eh: " << soma << endl;
			break;
		case 'f':
			soma = (62.1 * altura) - 44.7;
			cout << "O peso ideal eh: " << soma << endl;
			break;
		default:
			cout << "Algo de errado FDP, tente novamente." << endl;
			
	}	
*/

}