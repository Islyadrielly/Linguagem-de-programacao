/* 38) Peça ao usuário para digitar dez valores numéricos e ordene por ordem crescente esses valores,
guardando-os num vetor. Ordene o valor assim que ele for digitado. Mostre ao final na tela os
valores em ordem. */

#include <iostream> 

#define N 10

using namespace std;

int main() {
    int i, x, j, vet[N];

    for(i=0; i<N; i++) {
        cout << "Digite um valor numerico: ";
        cin >> vet[i];
    }

    for(i=0; i<N; i++) { //fazendo as trocas de posicão de forma crescente
        for(x=i+1; x<N; x++) {
            if (vet[i] > vet[x]) {
                j = vet[i];
                vet[i] = vet [x];
                vet[x] = j;
            }
        }
    }
    //perfumaria e exibicao do resultado
    cout << endl;
    cout << "----------ORDEM CRESCENTE----------" << endl;
    cout << "\t";
    for(i=0; i<N; i++) {
        cout  << vet[i] << " ";
    }
    cout << endl;
    cout << "-----------------------------------" << endl;
    cout << endl;

    system("pause");
    return 0;
}