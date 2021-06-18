/* 17. Leia um vetor de 10 posições e atribua valor 0 para todos os elementos que possuírem valores
negativos.*/

#include <iostream> 

#define N 10

using namespace std;

int main() {
    int vet[N], i;

    for(i=0; i<N; i++) {
        cout << "Digite o valor para posição" << i+1 << ":";
        cin >> vet[i];   
            
        if(vet[i] < 0) {
            vet[i] = 0;
        }
    }

    for(i=0; i<N; i++) { //for para exibição dos numeros
        cout << vet[i] << " | ";
    }

    system("pause");
    return 0;
}