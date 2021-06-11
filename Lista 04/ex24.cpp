/* 24)Fazer um algoritmo que calcule e escreva o valor de S onde: S=1/1−2/4+3/9−4/16+5/25−6/36+⋯−10/100*/

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    float s =0, t =0;
    int n =0;

    for (n =1; n <=10; n++) {
    t = pow(n,2);

        if(n % 2 != 0) {
            s+=(float)n/t;      
        }    
        else if (n % 2 ==0)
            s-=(float)n/t;   
    }

    cout << fixed << setprecision(23);
    cout << "S = " << s << endl;

system("pause");
return 0;
}        