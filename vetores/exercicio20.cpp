/* 20. Escreva um programa que leia números inteiros no intervalo [0-50] e os armazene em um vetor
com 10 posições. Preencha um segundo vetor apenas com os números ´ımpares do primeiro
vetor. Imprima os dois vetores, 2 elementos por linha.*/

#include <iostream> 

#define N 10

using namespace std;

int main() {
    int vet[N], i, impar[N], j=0;

    for(i=0; i<N; i++) {
        cout << "Digite um numero inteiro para posicao " << i+1 << ":";
        cin >> vet[i];

            if(vet[i] > 50 or vet[i] < 0) {
                cout << "Apenas numeros inteiros no intervalo de 0 a 50 são aceitos" << endl;
                break;
            }
            if (vet[i] % 2 !=0) {
                impar[j] = vet[i];
                j++;
            }  
    }

    cout << endl;
    
    cout << "-------Vetor de 10 posicoes-------";
    for(i=0; i<N; i++) { //for para exibição dos numeros no vetor
        if(i % 2 ==0) {
            cout << endl; //para exibir dois por linha
        }        
        cout << vet[i] << " ";
    }

    cout << endl;

    cout << "---------Vetor de Impares---------";
    for(i=0; i<j; i++) { //for para exibição dos numeros impares
        if(i % 2 ==0) {
            cout << endl;
        }
        cout << impar[i] << " ";
    }

    cout << endl;    

    system("pause");
    return 0;
}