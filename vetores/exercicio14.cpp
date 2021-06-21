/* 14. Faça um programa que leia um vetor de 10 posições e verifique se 
existem valores iguais e os escreva na tela.*/

#include <iostream> 

#define N 10

using namespace std;

int main() {
    int vet[N], i, x;

    for(i=0; i<N; i++) {
        cout << "Digite um numero para posicao " << i << ": ";
        cin >> vet[i];
    }

        for(i=0; i<N; i++) {
            for(x=0; x<N; x++) {
                if(vet[i] == vet[x] && i != x) {
                cout << "-----------------------------------------------------------------" << endl;    
                cout << "O valor na posicao " << x << " esta repetido." << endl;
                }                 
            }

        } 
        cout << "-----------------------------------------------------------------" << endl;

    system("pause");
    return 0;
}