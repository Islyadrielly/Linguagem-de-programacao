/* 7) Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado 
possui uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS 8%). 
    Faça um programa em que o usuário entre com o valor e o estado destino do produto e 
o programa retorne o preço final do produto acrescido do imposto do estado em que ele
será vendido. Se o estado digitado não for válido, mostrar uma mensagem de erro. */

#include <iostream>

using namespace std;

int main () 
{
    system("color 03");

        // declaração das variáveis:
        float valor_p, valor_final, imposto;
        int destino;

        // recebendo valor do produto e destino:
        cout << "Informe o valor do produto: ";
        cin >> valor_p;

        cout << "---------------------------------------------------" << endl;
        cout << "No momento os seguintes destinos estão disponíveis:" << endl; 
        cout << "(1) MG, (2) SP, (3) RJ, e (4) MS." << endl;
        cout << "Informe o número do destino desejado." << endl;
        cout << "---------------------------------------------------" << endl;
        cin >> destino;

            switch (destino) {
        case 1: cout << "---------------------------------------------------" << endl;
                cout << "Calculando valor final para o destino desejado..."  << endl;
                imposto = (valor_p * 0.07);
                valor_final = (valor_p + imposto);
                break; //para que ele pare de ser executado.

        case 2: cout << "---------------------------------------------------" << endl;
                cout << "Calculando valor final para o destino desejado..." << endl;
                imposto = (valor_p * 0.12);
                valor_final = (valor_p + imposto);       
                break;

        case 3: cout << "---------------------------------------------------" << endl;
                cout << "Calculando valor final para o destino desejado..." << endl;
                imposto = (valor_p * 0.15);
                valor_final = (valor_p + imposto); 
                break;

        case 4: cout << "---------------------------------------------------" << endl;
                cout << "Calculando valor final para o destino desejado..." << endl;
                imposto = (valor_p * 0.08);
                valor_final = (valor_p + imposto); 
                break;

       default: cout << "Destino inválido." << endl; // 
    }     
        if (destino >= 1 && destino <=4) {
        cout << "---------------------------------------------------" << endl;
        cout << "O valor final é R$ " << valor_final << endl;
        cout << "---------------------------------------------------" << endl;
        }

system("pause");
return 0;
}