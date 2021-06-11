/* 2) Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, 
      sabendo-se que o mesmo sofreu um aumento de 25%. */

#include <iostream>
#include <string>

using namespace std;

int main() {

  system("color 03");

    // Declarando as variaveis:
    float sal_anterior, sal_novo;
    string nome;

    // Inicialização de programa:
    cout << "-----------------------------------------------" << endl;
    cout << "A seguir você descobrirá o valor do seu novo " << endl;
    cout << "salário. A empresa concedeu um aumento de 25%" << endl;
    cout << "aos seus Funcionários." << endl;
    cout << "-----------------------------------------------" << endl;

    // Recebendo informações:
    cout << "Qual o seu nome? " << endl;
    getline(cin, nome);

    cout << "Informe o valor do seu Salário:" << endl;
    cin >> sal_anterior;

    // Calculando novo salário:
    sal_novo = sal_anterior * 1.25;

    // Exibindo as informações:
    cout << "-----------------------------------" << endl;
    cout << "Funcionário............: " << nome << endl;
    cout << "Salário anterior.......: R$ " << sal_anterior << endl;
    cout << "Salário Atual..........: R$ " << sal_novo << endl;
    cout << "-----------------------------------" << endl;

system("pause");
return 0;

}