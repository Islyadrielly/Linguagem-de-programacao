/* 7) Gerar e imprimir uma matriz de tamanho 10 x 10, onde seus elementos são da forma:
A[i][j] = 2i + 7j -2 se i<j;
A[i][j] = 3i² - 1 se i = j;
A[i][j] = 4i³ - 5j² + 1 se i>j; */

#include <iostream>
#include <math.h>

#define N 11

using namespace std;

int main() {
    int a[N][N], i=0, j=0;

    for(i=1; i<N; i++) {
        for(j=1; j<N; j++) {
            if(i < j) {
                a[i][j] = (2*i) + (7*j) -2;
            } 
            else if(i==j) {
                a[i][j] = (3 * pow(i, 2)) - 1;
            }
            else {
                a[i][j] = (4 * pow(i, 3)) - (5 * pow(j, 2)) +1;
            }
        }
    }

    cout << "--------------------IMPRIMINDO--------------------" << endl;
    for(i=1; i<N; i++) {
        for(j=1; j<N; j++) {
            cout << a[i][j] << " "; 
        }
        cout << endl;
    } 
    
    cout << "-------------------------------------------------" << endl;    
    cout << endl;

    system("pause");
    return 0;
}