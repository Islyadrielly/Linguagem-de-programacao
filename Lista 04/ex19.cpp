/* 19)Uma determinada fábrica de rádios possui duas linhas de montagem distintas: standard e luxo. 
A linha de montagem standard comporta um máximo de 24 operários; cada rádio standard dá um lucro de 
X reais e gasta um homem-dia para sua confecção. A linha de montagem luxo comporta no máximo 32 
operários; e cada rádio luxo dá um lucro de Y reais e gasta 2 homens-dia para sua confecção. 
A fábrica possui 40 operários. O mercado é capaz de absorver toda a produção e o fabricante deseja 
saber qual esquema de produção a adotar de modo a maximizar seu lucro diário. 
Fazer um algoritmo que leia os valores de X e Y e escreva, para esse esquema de lucro máximo, 
o número de operários na linha standard e na linha luxo, o número de rádios standard e luxo 
produzidos e o lucro.*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){

    float lucrost, lucrolx, lucrototal, x, y, max = 0, maxop_lx, maxop_std;
    int op_lx, op_std;

    op_lx = 32;

    cout << "Insira o lucro do rádio standard: ";
    cin >> x;
    cout << "Insira o lucro do rádio de luxo: ";
    cin >> y;
    
    for (op_std = 8; op_std <= 24; op_std += 2){

        lucrost = op_std * x;
        lucrolx = (op_lx / 2) * y;

        lucrototal = lucrost + lucrolx;

        if (lucrototal > max){
            max = lucrototal;
            maxop_std = op_std;
            maxop_lx = op_lx;
        }

        op_lx -= 2;
    }

    cout << "Operadores necessários na montagem luxo: " << maxop_lx << endl;
    cout << "Operadores necessários na montagem standard: " << maxop_std << endl;
    cout << "Lucro total máximo de: R$" << max << endl;

system("pause");
return 0;    
}       