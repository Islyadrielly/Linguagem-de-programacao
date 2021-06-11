/* 15) Escreva um programa que receba dois números inteiros e que disponibilize as 
opções abaixo e imprima o resultado da operação:
• A - retornar o soma de dois números;
• S - retornar a subtração de dois números;
• M - retornar a multiplicação de dois números; 
• Q - retornar o quociente inteiro de uma divisão; 
• E - retornar mensagem de erro (opção inválida). */

#include <iostream>

using namespace std;

int main () 
{
    system("color 03");

        // declaração das variáveis:
        int a, b, res;

        // recebendo valores
        cout << "Digite o primeiro número inteiro: ";
        cin >> a;
        cout << "Digite o segundo número inteiro: ";
        cin >> b;

        cout << "-------------------------" << endl;
        cout << "Escolha a opção desejada:" << endl;
        cout << "(1) - Adição." << endl;
        cout << "(2) - Subtração." << endl;
        cout << "(3) - Multiplicação." << endl;
        cout << "(4) - Divisão" << endl;
        cout << "-------------------------" << endl;
        cin >> res;

        if (res == 4 && (b == 0)) {
            cout << "Não é possível dividir por zero." << endl;
        }

        switch (res)
        {
        case 1: res = a += b;
            cout << "A soma dos valores é igual a: " << res << endl;
            break;

        case 2: res = a -= b;
            cout << "A subtração dos valores é igual a: " << res << endl;
            break;

        case 3: res = a *= b;
            cout << "A multiplicação dos valores é igual a: " << res << endl;
            break;

        case 4: res = a /= b;
            cout << "A divisão dos valores é igual a: " << res << endl;
            break;

        default: cout << "Opção inválida." << endl;
            break;
        }

system ("pause");
return 0;

}