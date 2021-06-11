/* 5)Supondo que a população de um país A seja da ordem de 9.000.000 de habitantes com uma taxa anual 
de crescimento de 3% e que a população de um país B seja, aproximadamente, de 20.000.000 de habitantes 
com uma taxa anual de crescimento de 1,5%, fazer um algoritmo que calcule e escreva o número de anos 
necessários para que a população do país A ultrapasse ou iguale a população do país B, mantidas essas
taxas de crescimento.*/

#include <iostream>

using namespace std;

int main() {

    int ano, pop_a = 9000000, pop_b = 20000000, igual = 0;

    ano = 0;

    do
    {
        pop_a += pop_a * 0.03;
        pop_b += pop_b * 0.015;
        ano++;

        if (pop_a >= pop_b) {
            igual =1; // == comparar | = recebe
        }

    } while (igual ==0);
    

    cout << "A quantidade de anos necessários será: " << ano << " anos." << endl;

    system("pause");
    return 0;
}
