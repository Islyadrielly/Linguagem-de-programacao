/* 3) Faça um programa que receba o salário base de um funcionário, 
calcule e mostre o salário à receber, sabendo-se que o mesmo possui 
uma gratificação de 5,5% sobre o salário base e paga 7% de IR sobre o salário base. */

#include <iostream>
#include <string>

using namespace std;

int main() {

system("color 03");

  
    // Declarando as variaveis:
    float sal_base, sal_receber, gratificacao, IR_desconto;
    string nome;

    // Recebendo informações:
    cout << "informe seu nome: ";
    getline(cin, nome);
    cout << "Informe o valor do seu Salário base: ";
    cin >> sal_base;

    gratificacao = sal_base * 0.055;
    IR_desconto = sal_base * 0.07;
    sal_receber = sal_base + gratificacao - IR_desconto;

    cout << "-----------------HOLERITE------------------" << endl;
    cout << "Salário base....................: R$ " << sal_base << endl;
    cout << "Gratificação [5,5%].............: R$ " << gratificacao << endl;
    cout << "IR [7%].........................: R$ " << IR_desconto << endl;
    cout << "Salário a receber...............: R$ " << sal_receber << endl;
    cout << "--------------------------------------------" << endl;

system("pause");

return 0;

}
