/* 11) Faça e um programa que, dados três números inteiros, 
       os imprima em ordem crescente. */

#include <iostream>


using namespace std;

int main () 
{
    system("color 03");

        // declaração das variáveis:
        int a, b, c;

        // recebendo valores:
        cout << "Digite 3 números inteiros: ";
        cin >> a >> b >> c;

        // possibilidades
        if (a <= b && b <= c)  {
            cout << "Ordem crescente: " << a << ", " << b << " e " << c << "." << endl;
        }      else if (a <= c && c <= b)  {
                    cout << "Ordem crescente: " << a << ", " << c << " e " << b << "." << endl;
        }      else if (a <= a && a <= c)  {
                    cout << "Ordem crescente: " << b << ", " << a << " e " << c << "." << endl;
        }      else if (b <= c && c <= a)  {
                    cout << "Ordem crescente: " << b << ", " << c << " e " << a << "." << endl;
        }      else if (c <= a && a <= b)  {
                    cout << "Ordem crescente: " << c << ", " << a << " e " << b << "." << endl;
        }      else if (c <= b && b < a)   {
                    cout << "Ordem crescente: " << c << ", " << b << " e " << a << "." << endl;
        }    
        

system("pause");
return 0;

}