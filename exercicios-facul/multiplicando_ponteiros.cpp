/*
Considere a seguinte declaração int a, *b, **c, ***d. Escreva um programa que leia a variável a e calcule e exiba o dobro, o
triplo e o quádruplo desse valor utilizando apenas os ponteiros b, c e d. O ponteiro b deve ser usado para calcular o dobro, c,
o triplo e d, o quádruplo.
*/

#include <iostream>

using namespace std;

main(){
int a;
int *b;
int **c;
int ***d;

cout << "Digite o valor para a: ";
cin >> a;

b = &a;
c = &b;
d = &c;

cout << "O dobro de a eh: " << (*b) * 2 << endl;
cout << "O triplo de a eh: " << (*(*c)) * 3 << endl;
cout << "O quadruplo de a eh: " << (*(*(*d))) * 4;
}