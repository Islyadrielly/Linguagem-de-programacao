/* 23)Fazer um algoritmo para calcular e escrever a seguinte soma: S=37×38/1+36×37/2+35×36/3+⋯+1×2/37*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float s =0, a =37, i =1, b =38;

    for (i =1; i <=37; i++) { 
     s+= (a*b/i);
     a--;
     b--;
    }

    cout << fixed << setprecision(2);
    cout << "S = " << s << endl;

system("pause");
return 0;
}        