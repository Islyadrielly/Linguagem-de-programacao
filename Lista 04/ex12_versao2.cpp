/* 12)O sistema de avaliação de uma determinada disciplina obedece aos seguintes critérios:
• durante o semestre são dadas três notas;
• a nota final é obtida pela média aritmética das notas dadas durante o curso;
• é considerado aprovado o aluno que obtiver a nota final superior ou igual a 6 
e que tiver comparecido a um mínimo de 40 aulas. Fazer um algoritmo que: 

a) Leia um conjunto de dados contendo o número de matrícula, as três notas e a frequência 
(número de aulas frequentadas) de 100 alunos.

b)Calcule: 
1.a nota final de cada aluno;
2.a maior e menor nota da turma;
3.a nota média da turma;
4.o total de alunos reprovados;
5.a porcentagem de alunos reprovados por infrequência; */


#include <iostream>

#ifndef _WIN32
#define CLEAR "clear"
#define PAUSE "read"
#else
#define CLEAR "cls"
#define PAUSE "pause"
#endif

#define NRO_ALUNOS 100
#define WHITE "\033[37;40m"
#define RED "\033[31;40m" 
#define GREEN "\033[32;40m "

using namespace std;

int main() {
    float n1, n2, n3, nf, manf = 0, menf = 0, mednf = 0;
    int freq, mat, trep = 0, frep = 0, status;


    for (int i = 0; i < NRO_ALUNOS; ++i) {
        system(CLEAR);
        cout << WHITE << "Matrícula: ";
        cin >> mat;
        cout << "Notas: " << endl;
        cin >> n1 >> n2 >> n3;
        cout << "Frequência: ";
        cin >> freq;

        nf = (n1 + n2 + n3) / 3;

        cout << mat << " - Nota Final: " << nf << " - Frequência:" << freq << " - ";
        if (nf >= 6 && freq >= 40)
            cout << GREEN << "APROVADO" << endl; 
        else {
            cout << RED << "REPROVADO" << endl; 
            trep++;
            if (freq < 40)
                frep++;
        }

        if (nf > manf)
            manf = nf;
        if(nf < menf || i == 0)
            menf = nf;

        mednf += nf;
        
        cout << WHITE << "Digite ENTER para continuar ..." << endl;
        system(PAUSE);
    }

    mednf /= NRO_ALUNOS;

    cout << "Media das Notas Finais: " << mednf << endl;
    cout << "Maior Nota Final: " << manf << endl;
    cout << "Menor Nota Final: " << menf << endl;
    cout << "Total de Reprovados: " << trep << endl;
    cout << "Total (%) dos Reprovados por Falta : " << (float)frep/trep * 100 << "%" << endl;

    return 0;
}
