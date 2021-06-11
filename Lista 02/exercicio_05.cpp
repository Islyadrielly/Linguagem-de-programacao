/* 5) Sabe-se que: 1 pé = 12 polegadas, 1 jarda = 3 pés e 1 milha = 1760 jardas.     
Faça um programa que receba uma medida em pés e converta para jardas e milhas. */

#include <iostream>

using namespace std;

int main () {

    system("color 03");

        // declaração das variáveis:
        float pe, jarda, milha = 0;

        // recebendo valores:
        cout << "Informe a medida em pés para que seja convertido em jardas e milhas" << endl;
        cin >> pe;

        jarda = pe / 3;
        milha = jarda / 1760;

        cout << "O valor de " << pe << " corresponde a " << jarda << " jardas, que são " << milha << " milhas." << endl;

system("pause");
return 0;

}