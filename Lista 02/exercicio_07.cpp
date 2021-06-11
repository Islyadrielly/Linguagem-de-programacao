/* 7) Faça um programa que receba o número de horas trabalhadas e o valor do salário mínimo, calcule 
e mostre o salário bruto e à receber de acordo com as regras:

a) A hora trabalhada vale 20% do salário mínimo
b) O salário bruto é o valor da hora trabalhada multiplicado pelo número de horas trabalhadas
c) O imposto equivale à 3% do salário bruto
d) O salário à receber é o salário bruto descontado o imposto.
*/

#include <iostream>
#include <string>

using namespace std;

int main () {

    system("color 03");

    float horas_trab, sal_min, sal_bruto, imposto, sal_receber;

    //Leitura dos dados iniciais
    cout << "Horas trabalhadas: "; 
    cin >> horas_trab;

    cout << "Salário Mínimo: ";
    cin >> sal_min;

    //Processamento dos cálculos necessários
    sal_bruto = horas_trab * (sal_min * 0.2); // 20% do salario minimo
    imposto = sal_bruto * 0.03;

    sal_receber = sal_bruto - imposto;

    //Mostrar resultados
    cout << "---------------Holerite-------------"  << endl;
    cout << "Salário Bruto....: R$ " << sal_bruto << endl;
    cout << "Imposto...........: R$ " << imposto << endl;
    cout << "Salário a receber: R$ " << sal_receber << endl;
    cout << "-------------------------------------" << endl;

    system("pause");
    return 0;
}