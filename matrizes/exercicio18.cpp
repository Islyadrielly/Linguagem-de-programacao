/* 18) Faça um programa que permita ao usuário entrar com uma matriz de 3 x 3 números inteiros. Em
seguida, gere um array unidimensional pela soma dos números de cada coluna da matriz e
mostrar na tela esse array. Por exemplo, a matriz: 

5 -8 10
1 2 15
25 10 7

Vai gerar um vetor, onde cada posição é a soma das colunas da matriz. A primeira posição será 5 + 1
+ 25, e assim por diante:
31 4 3 */

#include <iostream> 

#define N 3

using namespace std;

int main() {
    int num, i, j, m[N][N], aux[N] = {0,0,0};

    for(i=0; i<N; i++) {
        for(j=0; j<N; j++) {
            cout << "Digite um valor: ";
            cin >> num;
            m[i][j] = num;
            aux[j] += m[i][j];
        }
        cout << endl;
    }

    cout << "-----------SOMA-----------" << endl;
    cout << "\t";
    for(i=0; i<N; i++) {
        cout << aux[i] << " ";
    }
    cout << endl;
    cout << "--------------------------" << endl;

    system("pause");
    return 0;
}