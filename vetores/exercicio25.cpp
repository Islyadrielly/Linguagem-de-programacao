/* 25) Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros naturais que
não são múltiplos de 7 ou que terminam com 7. */

#include <iostream> 

#define N 100

using namespace std;

int main() {
    int i, j=0, vet[N], aux[N];

    for(i=0; i<N; i++) {
        vet[i] = i;
        if(i % 7 !=0 && (i + 3) % 10 != 0) {
            aux[j] = vet[i]; //recebendo os não multiplos de 7
            j++;
        }
    }
    cout << " ";
    for(i=0; i<j; i++) {
        cout << aux[i] << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}