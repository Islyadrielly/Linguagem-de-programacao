/* 14) Dada a função 𝑓 definida por:
f(x)= 4 − x ^ 2 se x < 1 
f(x)= 2, se x = 1 
f(x)= 2 + x ^2, se x > 1. */

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main () 
{
    system("color 03");

        // declaração das variáveis:
        float x, f;

    cout << "Informe um valor para x: ";
    cin >> x;

    // condicionais
    if (x < 1) {  
	    f = 4 - pow(x, 2);
         cout << fixed << setprecision(2);
         cout << "f(x) é igual a: " << f << "." << endl;
    }
    else
	    if (x == 1) {
	    f = 2;
         cout << fixed << setprecision(2);
         cout << "f(x) é igual a: " << f << "." << endl;
    }
    else
	    if (x > 1) {
	    f = 2 + pow(x, 2);
         cout << fixed << setprecision(2);
         cout << "f(x) é igual a: " << f << "." << endl;
    }    
 

system ("pause");
return 0;

}