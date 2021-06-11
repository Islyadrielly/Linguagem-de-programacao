/* 1)Faça um programa que receba três números e seus respectivos pesos, calcule e mostre a média ponderada. */

#include <iostream>

using namespace std;

int main() {


    // Declarando as variaveis:
    int n1, n2, n3;
    float p1, p2, p3, media_pond;

    // Inicialização do programa:
    cout << "-----------------------------------------------------------------------------" << endl;
    cout << "O programa a Seguir poderá receber até três valores e seus respectivos pesos " << endl;
    cout << "para realizar o cálculo da média ponderada." << endl;
    cout << "-----------------------------------------------------------------------------" << endl;

    // recebendo os valores e pesos:
    cout << "Informe o primeiro número e seu peso." << endl;
    cin >> n1 >> p1;

    cout << "Informe o segundo número e seu peso." << endl;
    cin >> n2 >> p2;

    cout << "Informe o terceiro número e seu peso." << endl;
    cin >> n3 >> p3;

    // cálculo da média ponderada:
    media_pond = (p1*n1 + p2*n2 + p3*n3) / (p1 + p2 + p3);
    cout << "O resultado da média ponderada é:" << media_pond << endl;

    system("pause");
    return 0;
}