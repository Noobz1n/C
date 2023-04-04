/*
Faça um programa onde aloque dinamicamente 5 espaços de memória do tipo real, após isto leia 
do teclado estes 5 números. Depois aumente este espaço para 10 e guarde mais estes novos números.
Depois diminua para 8 espaços. Exiba na tela estes 8 números guardados e por fim libere a memória.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

main(){
    int i = 0;
    // aqui ele reservar 5 espacos na memoria, o primeiro vai ser lixo de memoria e o resto 0
    float *nums = (float *) malloc(5 * sizeof(float));
    // usuario vai inserir 5 numerois
    cout << "Informe 5 numeros: ";
    while (i < 5) {
        cin >> nums[i];
        i++;
    }
    
    i = 0;
    // aumentar o espaco para 10 e guardar os numeros inseridos
    float *espaco = (float *) realloc(nums, 10 * sizeof(float));
    if (espaco != NULL) {
        nums = espaco;
        cout << "Insira mais 5 numeros: ";
        while (i < 5) {
            cin >> nums[i];
            i++;
        }
    }

    // diminuir o espaco de memoria para 8

    espaco = (float *) realloc(nums, 8 * sizeof(float));
    if (espaco != NULL) {
        nums = espaco;
    }

    cout << "Numeros guardados: ";

    i = 0;
    while (i < 8) {
        cout << nums[i] << endl;
        i++;
    }


}