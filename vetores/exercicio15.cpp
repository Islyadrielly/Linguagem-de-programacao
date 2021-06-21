/* 15. Leia um vetor com 20 números inteiros. Escreva os elementos do vetor eliminando elementos
repetidos.*/

#include <iostream> 

#define N 20

using namespace std;

int main() {
    int vet[N], aux[N], i, x, j=0;
    bool repetido;

    for(i=0; i<N; i++){
        cout << "Digite o valor " << i+1 << ":" ;
        cin >> vet[i];
    }
    
    for(i=0; i<N; i++)
    {
        repetido = false;
        for(x = i+1; x<N; x++){
            if(vet[i] == vet[x]) {
                repetido = true; //indica que o número está repetido
                break;
            }
        }
        if (!repetido)
        {
          aux[j] = vet[i];
          j++;
        }
    }
    cout << "----------------------------------------------------" << endl;
    cout << "Os valores no vetor eliminando elementos repetidos: " << endl;
    for(i=0; i<j; i++)
    {
        cout << aux[i] << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}