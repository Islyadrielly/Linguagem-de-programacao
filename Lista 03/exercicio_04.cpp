/* 4) Faça um programa que receba dois números e mostre o maior. */

#include <iostream>

using namespace std;

int main () {

    system("color 03");

        // declaração das variáveis:
        float n1, n2;

        cout << "Digite o primeiro número: ";
        cin >> n1;

        cout << "Digite o segundo número: ";
        cin >> n2;

        // exibição do resultado
        if (n1 > n2)
        {
            cout << "O número " << n1 << " é o maior." << endl;
        }
                else 
                {
                        cout << "O número " << n2 << " é o maior." << endl;
                }
        
system("pause");
return 0;

}