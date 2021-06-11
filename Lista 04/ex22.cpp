/* 22)Fazer um algoritmo que calcule e escreva a seguinte soma: 2¹/50+2²/49+2³/48+⋯+2^50/1*/

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    float s =0, t=0;
    int n =1, d =50;

    for (int i =1; i <=50;) { 
     t = pow(2,i)/d; 
     s+= t;
     i++;
     d--;
    }

    cout << fixed << setprecision(0);
    cout << "Soma = " << s << endl;

system("pause");
return 0;
}    