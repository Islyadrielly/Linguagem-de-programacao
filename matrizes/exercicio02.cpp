/* 2) Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais elementos.
Escreva ao final a matriz obtida.*/

#include <iostream> 

using namespace std;

int main() {
    int M[5][5], i ,x;

    for(i=0; i<5; i++) {
        for(x=0; x<5; x++) {
            if (x==i) {
                M[i][x]=1; //preenchendo primeira diagonal
            }
            else {
                M[i][x]=0; //preenchendo 0 nos demais
            }
        }
    }

    for(i=0; i<5; i++) { //exibicao
        cout << M[0][i] << M[1][i] << M[2][i] << M[3][i] << M[4][i] << endl;
    }

    system("pause");
    return 0;
}