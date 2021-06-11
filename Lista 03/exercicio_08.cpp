/* 8) Tendo como dados de entrada a altura e o sexo de uma pessoa, construa 
um programa que calcule seu peso ideal, utilizando as seguintes fórmulas:
● para homens: (72.7 * h) – 58;
● para mulheres: (62.1 * h) – 44.7. */

#include <iostream>

using namespace std;

int main () 
{
    system("color 03");

        // declaração das variáveis:
        int sexo; double altura, peso_ideal; 

        // recebendo informações:
        cout << "Informe seu sexo: Considere (1) Feminino e (2) Masculino." << endl;
        cin >> sexo;
        cout << "Digite sua altura: ";
        cin >> altura;

        if (sexo == 1) {
            peso_ideal = (72.7 * altura) - 58;
                cout << "O seu peso ideal é: " << peso_ideal << endl;
        }       
            else if (sexo == 2) {
                peso_ideal = (62.1 * altura) - 44.7;
                    cout << "O seu peso ideal é: " << peso_ideal << endl;
            }
                else {
                    cout << "Sexo inválido." << endl;
                }
                
system("pause");
return 0;
}        