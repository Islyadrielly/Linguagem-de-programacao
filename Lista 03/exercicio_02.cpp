/* 2) Faça um programa que receba duas notas, calcule e mostre a média aritmética e 
a mensagem de acordo com a tabela abaixo:

Média [0,3] = Reprovado
Média [3,7] = Exame
Média [7,10] = Aprovado */

#include <iostream>

using namespace std;

int main () {

    system("color 03");

        // declaração das variáveis:
        double n1, n2, media_arit;

        // recebendo as entradas:
        cout << "Informe em sequência as 2 notas do aluno(a)." << endl;
        cin >> n1 >> n2;

        // calculando a média:
        media_arit = (n1 + n2) / 2;

        //exibindo informações
        if (media_arit <= 3) {
           
            cout << "O aluno obteve média " << (media_arit) << ", está reprovado." << endl;
        }
                else if (media_arit > 3 && media_arit < 7) {
                    
                     cout << "O aluno obteve média " << (media_arit) << ", por isso precisará realizar o exame." << endl;
                }
                        else if (media_arit > 7) {
                    
                            cout << "O aluno obteve média " << (media_arit) << " e foi aprovado." << endl;
                }
       
system("pause");
return 0;

}