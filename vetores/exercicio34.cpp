/* 34. Faça um programa para ler 10 números DIFERENTES a serem armazenados em um vetor. Os
dados deverão ser armazenados no vetor na ordem que forem sendo lidos, sendo que caso o
usuário digite um número que já foi digitado anteriormente, o programa deverá pedir para ele
digitar outro número. Note que cada valor digitado pelo usuário deve ser pesquisado no vetor,
verificando se ele existe entre os números que ja ́foram fornecidos. Exibir na tela o vetor final
que foi digitado.*/

#include <iostream> 

#define N 10

using namespace std;

int main() {
    
    int i=0, x, num, repetido = 0, exit = 0, vet[N];

    while (i < N) {
        cout << "Digite um numero: ";
        cin >> num;

        x = 0;
        exit = 0;

        while (x < i && exit != 1) {
            if (vet[x] == num){ // verifica se valor ja existe no vetor
                cout << "------------------------------" << endl;
                cout << "Numero ja esta presente no vetor. ";
                repetido = 1;
            } else {
                x++;
            }
            
            if (repetido == 1 ) { //solicita que usuario informe novo valor 
                cout << "Digite um numero diferente: ";
                cin >> num;
                repetido = 0;
            }
        }
        vet[i] = num;
        i++;
    }

    cout << "------------------------------" << endl;
    for(i=0; i<N; i++) {
        cout << vet[i] << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}