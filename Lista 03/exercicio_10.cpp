/* 10) O IMC – Indice de Massa Corporal é um critério da Organização Mundial de Saúde
 para dar umaindicação sobre a condição de peso de uma pessoa adulta. 
 A fórmula é IMC = peso / altura ^ 2.
Elabore um programa que leia o peso e a altura de um adulto e mostre sua condição de 
acordo com a tabela abaixo. 
Abaixo de 18,5  --> Abaixo do peso
Entre 18,5 e 25 --> Peso normal
Entre 25 e 30   --> Acima do peso 
Acima de 30     --> Obseso */

#include <iostream>

using namespace std;

int main () 
{
    system("color 03");

        // declaração das variáveis:
        float peso, altura, imc;

        // recebendo valores:
        cout << "Informe seu peso: ";
        cin >> peso;
        cout << "Informe sua altura: ";
        cin >> altura;

        imc = peso * (altura * altura);

        // utilização de if's para resultado:
        if (imc < 18.5) {
            cout << "você está abaixo do peso." << endl;
        }   
            else 
                if (imc < 18.5) {
                cout << "você está abaixo do peso." << endl;
        }
                else 
                     if (imc >= 18.5 < 25) {
                     cout << "Seu peso está normal." << endl;
        }
                    else 
                          if (imc >= 25 < 30) {
                          cout << "Seu acima do peso." << endl;
        }
                          else {
                          cout << "Você está obeso." << endl;
        }


system("pause");
return 0;

}