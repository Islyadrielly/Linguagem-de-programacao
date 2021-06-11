/* 4) Faça um programa que calcule a área de um circulo a partir de seu raio sabendo que: 
Area = πR2 */

#include <iostream>

using namespace std;

int main() {

system("color 03");

    // Declarando as variaveis:
    float raio, area;
    double pi;

    // Recebendo informações:
    cout << "Informe o valor do raio: ";
    cin >> raio;

    pi = 3.14;
    area = pi * raio * raio;

    cout << "A área do circulo é: " << area << endl;

    system("pause");
    return 0;

}

    