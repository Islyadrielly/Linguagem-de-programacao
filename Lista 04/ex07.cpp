/* 7)Deseja-se fazer um levantamento a respeito da ausência de alunos a primeira prova de Programação 
de Computadores para cada uma das 14 turmas existentes. Para cada turma, éfornecido um conjunto de 
valores, sendo que os dois primeiros valores do conjunto corresponde a identificação da turma
(A, ou B, ou C,...) e ao número de alunos matriculados, e os demais valores deste conjunto contêm o 
número de matrícula do aluno e a letra A ou P para o caso de o aluno estar ausente ou presente, 
respectivamente. Fazer um algoritmo que:
• para cada turma, calcule a porcentagem de ausência e escreva a identificação da turma e a porcentagem calculada;
• determine e escreva quantas turmas tiveram porcentagem de ausência superior a 5%.*/

#include <iostream>

using namespace std;

int main() {

    int t, a, num_mat, id_aluno, ausentes, ausencia5 =0;
    char id_turma, status;
    float perc5 =0;

    for(t =0; t <3; t++) {
        cout << "Id da Turma: ";
        cin >> id_turma;
        cout << "Num. Matriculados: ";
        cin >> num_mat;
        ausentes =0;

        for(a =0; a < num_mat; a++) {
        cout << "Id Aluno: " << endl;
        cin >> id_aluno;
        cout << "Situação [A/P]: ";
        cin >> status;

        if(status == 'A')
            ausentes++;
        }
        perc5 = (float)ausentes/num_mat * 100; // transformamos o valor da variavel em float, ela continua sendo inteira
        cout << "A turma " << id_turma << " apresentou " << ausentes/num_mat * 100 << "% de ausencias." << endl;
        if (perc5 <5)
            ausencia5++;
    }
    
    cout << ausencia5 << " é a quantidade de turmas com ausencia maior que 5%." << endl;

    system("pause");
    return 0;
}    