#include <iostream>
using namespace std;

/*

5. Faça o algoritmo para calcular quanto será pago por um produto, sendo que o preço do produto e o desconto, em porcentagem, são
fornecidos pelo usuário. Apresentar o valor a ser pago pelo produto.

*/


main(){
	int produto, total;
    float desconto, precodesconto;

    cout << "Digite o valor do produto: ";
    cin >> produto;
    cout << "Digite o valor do desconto: ";
    cin >> desconto;
    
    precodesconto = produto * (desconto/100);
    total = produto - precodesconto;


    cout << "O valor pago no final sera: " << total;
    

	
	
	
	
	
}