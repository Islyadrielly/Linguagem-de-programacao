#include <iostream>
#include <math.h> 
#include "pt_br.h"

using namespace std;
//f(x) = ax² + bx + c

float calcula_delta(float a, float b, float c) {
    float delta = (b*b) - (4*a*c);
    return delta;
}

float calcula_x1 (float a, float b, float c){
    float delta = calcula_delta(a, b, c);
    float x = ((-b) + sqrt(delta)) / (2*a);
    return x;
}

float calcula_x2 (float a, float b, float c){
    float delta = calcula_delta(a, b, c);
    float x = ((-b) - sqrt(delta)) / (2*a);
    return x;
}

void raizes (float a, float b, float c, float *x1, float *x2) {
    *x1 = calcula_x1(a, b, c);
    *x2 = calcula_x2(a, b, c);
}

int main() {
    acentos();
    float x1, x2, *ponteirox1, *ponteirox2;
    float a, b, c, delta;

    ponteirox1 = &x1; 
    ponteirox2 = &x2;

    cout << "----- Calculadora de Funções de 2º grau ------\n";
    cout << "Digite o valor de A: ";
    cin >> a;
    cout << "Digite o valor de B: ";
    cin >> b;
    cout << "Digite o valor de C: ";
    cin >> c;

    if (a == 0) {
        cout << "Não é uma equação de segundo grau." << endl;
    }

    raizes(a, b, c, ponteirox1, ponteirox2);
    system("cls");

    if (calcula_delta(a, b, c) <0) {
        cout << "Não existem raizes, pois o delta é negativo" << endl;
    }

    else if (calcula_delta(a, b, c) == 0) {
        cout << "Delta igual a zero, x' e x'' são: " << x1 << endl;
    }

    else {
        cout << "x '  = " << x1 << endl;
        cout << "x '' = " << x2 << endl;
    }

    return 0;
}