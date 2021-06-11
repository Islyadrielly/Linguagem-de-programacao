/* 6) Determine se um determinado ano lido é bissexto. Sendo que um ano é bissexto se 
for divisível por 400 ou se for divisível por 4 e não for divisível por 100. 
Por exemplo: 1988, 1992, 1996.*/

#include <iostream>

using namespace std;

int main () 
{
    system("color 03");

        // declaração das variáveis:
        int ano;

        // recebendo valor da variavel ano:
        cout << "Informe o ano que deseja verificar se é bissexto: ";
        cin >> ano;

        if (ano % 4 == 0 && (ano % 400 == 0 || ano % 100 != 0))
        {
            cout << "O ano de " << ano << " é bissexto." << endl;
        }
            else {
                cout << "O ano de " << ano << " não é bissexto." << endl;
            }
        
system ("pause");
return 0;
}        