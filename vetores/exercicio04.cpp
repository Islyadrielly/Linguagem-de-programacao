/* 4. Leia um vetor de 10 posições. Contar e escrever quantos valores 
pares ele possui.*/

#include <iostream> 

#define N 10

using namespace std;

int main() {
    int vet[N], par =0, i, x;

    for(i =0; i<N; i++) { 
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    for (x=0; x<N; x++) {
        if(vet[x] % 2 ==0) {
            cout << "o número: " << vet[x] << " e par" << endl;
            par++;
        }
    }

    cout << "Durante a exucação do código, houveram " << par << " pares." <<endl;

    system("pause");
    return 0;
}