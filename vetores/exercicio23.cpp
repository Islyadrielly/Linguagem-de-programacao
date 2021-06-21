/* 23) Ler dois conjuntos de números reais, armazenando-os em vetores e calcular o produto escalar
entre eles. Os conjuntos têm 5 elementos cada. Imprimir os dois conjuntos e o produto escalar,
sendo que o produto escalar é dado por: x1*y1+ x2*y2+....xn*yn */

#include <iostream> 

#define N 5

using namespace std;

int main() {
    float x[N], y[N], mult[N], soma;
    int i, j=0;

    cout << "Informe os 5 elementos para o vetor x: ";
    for(i=0; i<N; i++) {
        cin >> x[i];
        system("cls"); //irá limpar o terminal após receber o valor.
    }

    cout << "Informe os 5 elementos para o vetor y: ";
    for(i=0; i<N; i++) {
        cin >> y[i];
        system("cls");
    }

    for(i=0; i<N; i++) {
        soma += x[i] * y[i]; //soma do produto escalar
    }

    // apenas exibindo os vetores
    cout << "--------------------------------------" << endl;
    cout << "Elementos do vetor x: ";
    for(i=0; i<N; i++) {
        cout << x[i] << " ";
    }
    cout << endl;

    cout << "--------------------------------------" << endl;
    cout << "Elementos do vetor y: ";
    for(i=0; i<N; i++) {
        cout << y[i] << " ";
    }        
    cout << endl;

    //exibindo resultado
    cout << "--------------------------------------" << endl;
    cout << "O resultado do produto escalar: [" << soma << "]" << endl;
    cout << "--------------------------------------" << endl;

    system("pause");
    return 0;
}
