/* 
Aloque 5 espaços do tipo real utilizando malloc e 5 espaços do mesmo tipo utilizando calloc. Feito 
isto, mostre na tela o conteúdo destes 10 espaços alocados
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

main(){
    float *mllc = (float *) malloc(5 * sizeof(float));  
    float *cllc = (float *) calloc(5 , sizeof(float));

    cout << "Espacos alocados com malloc: ";
    for (int i = 0; i<5; i++) {
        cout << mllc[i] << endl;
    }

    cout << "Espacos alocados com calloc: ";
    for (int i = 0; i<5; i++) {
        cout << cllc[i] << endl;
    }
}