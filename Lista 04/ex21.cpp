/* 21)Fazer um algoritmo que calcule e escreva o valor de S: S=1/1+3/2+5/3+7/4+⋯+99/50*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float s =0, n =1, i =1;

    for (i =1; i <=50; i++) { 
     s+= (n/i);
     n+= 2;
    }

    cout << fixed << setprecision(1);
    cout << "S = " << s << endl;

system("pause");
return 0;
}        