/* 9) Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão abaixo da
diagonal principal */

#include <iostream> 

#define N 3

using namespace std;

int main() {
    int m[N][N], i, j, res=0;

    for (i=0; i<N; i++) {
        for (j=0; j<i; j++) {
            cout <<"Digite o numero: ";
            cin >> m[i][j]; //vai receber as 3 linhas por coluna
        }
    }

    res = m[1][0] + m[2][0] + m[2][1]; //soma solicitada

    cout << "------------------------------------------------------------------" << endl;
    cout << "A soma dos elementos que estao abaixo da diagonal principal e: " << res << endl;
    cout << "------------------------------------------------------------------" << endl;

system("pause");
return 0;
}