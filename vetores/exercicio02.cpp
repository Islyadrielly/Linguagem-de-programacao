/* Faça um programa que possua um vetor denominado A que armazene 6 números inteiros. O programa deve executar os seguintes passos:
Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
Armazene em uma variável inteira (simples) a soma entre os valores das posições
A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.
Mostre na tela cada valor do vetor A, um em cada linha. */

#include <iostream> 

#define N 6

using namespace std;

int main() {
    int S, A[N] = {1,0,5,-2,-5,7}, i;

    S = A[0] + A [1] + A[5];
    
        cout << "S = " << S << endl;
        A[4] = 100;

        for(i=0; i<N; i++) {
            cout << "Vetor A: {" << i << "} = " << A[i] << endl;
        }

    system("pause");
    return 0;
}