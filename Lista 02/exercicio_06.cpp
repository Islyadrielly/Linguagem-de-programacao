/* 6) Faça um programa que leia o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
a)A idade da pessoa;
b)A idade da mesma em 2050. */

#include <iostream>
#include <string>

using namespace std;

int main () {

        // declaração das variáveis:
        int ano_nasc; string nome;

        cout << "Qual o seu nome? ";
        getline(cin, nome);

        cout << nome << ", em que ano você nasceu? (XXXX)" << endl;
        cin >> ano_nasc;
        
    // Retornando as informações:
        cout << "----------------------------------------------------" << endl;
        cout << nome << ", você tem " << (2021 - ano_nasc) << " anos." << endl;
        cout << "Em 2050, você terá " << (2050 - ano_nasc) << " anos." << endl;
        cout << "----------------------------------------------------" << endl;

    system ("pause");
    return 0;    
}