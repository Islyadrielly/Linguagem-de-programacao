/* 1) Faça um programa que receba quatro notas de um aluno, calcule e mostre 
a média aritmética, por fim escreva se ele foi aprovado ou reprovado, considerando 
que para ser aprovado a média deverá ser maior ou igual à 7,0. */

#include <iostream>

using namespace std;

int main () {

    system("color 03");

        // declaração das variáveis:
        float n1, n2, n3, n4, media_arit;

        // recebendo as entradas:
        cout << "Informe em sequência as 4 notas do aluno(a)." << endl;
        cin >> n1 >> n2 >> n3 >> n4;

        // calculando a média:
        media_arit = (n1 + n2 + n3 + n4) / 4;

        if (media_arit >= 7) {     
            cout << "O aluno obteve média " << media_arit << " e foi aprovado." << endl;
        }
                else {  
                     cout << "O aluno obteve média " << media_arit << " e por isso foi reprovado." << endl;
                }

system ("pause");
return 0;

}
        
