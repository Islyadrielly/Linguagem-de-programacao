// Nome: Adrielly Isly Guerra da Silva
//   RA: 2840482111002 
  
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float resultado, numerador=1, denominador=1, soma, i;

    for (i =0; i <500; i++)
    { 
        if (i>1)
        {
            numerador = pow(numerador,i);
        }    
        denominador*=i;

        resultado = numerador/denominador; 
        soma+=resultado;   
    }
    
    cout << "S = " << soma << endl;

system("pause");
return 0;
}    