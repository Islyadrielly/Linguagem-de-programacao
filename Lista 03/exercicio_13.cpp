/* 13) Faça um algoritmo que, dado o valor total em reais e o número de prestações 
desejadas, calcule o valor de cada prestação. O número mínimo de prestações deve ser 12. 
Se o número de prestações for maior ou igual a 24, adicione 10% de juros ao valor total, 
se for maior ou igual a 36, adicione 15% de juros ao valor total.*/

#include <iostream>
#include <iomanip>

using namespace std;

int main () 
{
    system("color 03");

        // declaração das variáveis:
        double valor, juros, valor_prest;
        int p; 

        cout << "Informe o valor do produto: ";
        cin >> valor;
        cout << "Digite a quantidade de prestações: ";
        cin >> p;

        if (p < 12) { 
          cout << "A quantidade de prestações não pode ser inferior a 12." << endl;
        }   
        
        if (p >= 12 && (p < 24)) {
            valor_prest = valor / p;
            cout << fixed << setprecision(2);  
            cout << "A condição de pagamento será em " << p << " vezes de R$ " << valor_prest << "." << endl;
        }
        else
            if (p >= 24) {
            juros = valor * 0.10;
            valor_prest = (valor + juros) / p;
            cout << fixed << setprecision(2);  
            cout << "A condição de pagamento será em " << p << " vezes de R$ " << valor_prest << "." << endl;
        }
        else 
            if (p > 36) {
               juros = valor * 0.15;
               valor_prest = (valor + juros) / p;
            cout << fixed << setprecision(2);  
            cout << "A condição de pagamento será em " << p << " vezes de R$ " << valor_prest << "." << endl;
        }

system ("pause");
return 0;        
        
}        