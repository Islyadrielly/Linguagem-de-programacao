/* 8) Faça um programa que leia 2 números representando os lados de um retângulo, calcule e imprima 0 
se tais lados formares um quadrado, caso contrário imprima qualquer outro valor.
*/

#include <iostream>
#include <string>

using namespace std;

int main () {

    system("color 03");
    
    float lado1, lado2;

    cout << "Digite os dois lados do retângulo: " << endl;
    cin >> lado1 >> lado2;

    cout << !(lado1 == lado2) << endl;

    system("pause");
    return 0;
}
