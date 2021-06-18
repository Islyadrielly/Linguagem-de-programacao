/* 14. Faça um programa que leia um vetor de 10 posições e verifique se 
existem valores iguais e os escreva na tela.*/

#include <iostream> 

#define N 10

using namespace std;

int main() {
    int vet[N], i, x;

    for(i=0; i<N; i++) {
        cout << "Digite um número: ";
        cin >> vet[i];

        for(x=0; x<i; x++) {
            if(vet[i] == vet[x]) {
                cout << "O número no índice " << i << " é igual ao número do índice" << x << endl;
            }
        } 
    }

    system("pause");
    return 0;
}