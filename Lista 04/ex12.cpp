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
#include <iomanip>

using namespace std;

int main() {

int matricula =0, frequencia =0, reprovado =0, aprovado =0, i;
float n1 =0, n2 =0, n3 =0, media =0, p_reprovadof =0, media_turma =0, nota_turma =0, maior_nota =0, menor_nota =0;
float aluno =0, reprovadof =0, aux =0;

//receber 3 notas: n1 n2 n3 ok
//notafinal = media aritmetica de n1 n2 n3/3

for(i =0; i <100; i++)
{	cout << "Informe o número de matricula do aluno(a): ";
	cin >> matricula;
	cout << "Digite as 3 notas do aluno(a) sequêncialmente: ";
	cin >> n1 >> n2 >> n3;
	cout << "Informe o número de aulas frequentadas por este aluno(a): "; 
	cin >> frequencia;

	aux = n1, n2, n3;

	if (i ==0) { // este if e para evitar que a maior e a menor nota so sejam pegues no ultimo valor
		maior_nota = aux;
		menor_nota = aux;
	}

	//descobrindo a maior nota
	if(n1 > n2 && n1 > n3 > maior_nota) 
		maior_nota = n1;
	if (n2 > n1 && n2 > n3 > maior_nota) 
		maior_nota = n2;
	if (n3 > n1 && n3 > n2 > maior_nota)
		maior_nota = n3; 

	menor_nota = maior_nota;

	if(n1 < n2 && n1 < n3 < menor_nota)
		menor_nota = n1;
	if(n2 < n1 && n2 < n3 < menor_nota)
		menor_nota = n2;
	if (n3 < n1 && n3 < n2 > menor_nota)
		menor_nota = n3;	

	aluno++;
	nota_turma += n1+n2+n3; //acumulador*.		
		
	if(frequencia > 40)
	reprovadof++; //total de alunos reprovados por frequencia

	media = (n1+n2+n3)/3; //nota final de cada aluno
	media_turma = (nota_turma/3)/aluno; //nota media da turma
	p_reprovadof = (reprovadof/aluno)*100; // porcentagem de aluynos reprovados por freuqencia	

	if(media >= 6 && frequencia >= 40) { 
	cout << fixed << setprecision(1);
	cout << "------------------------------------------" << endl;
	cout << "Número de matrícula: " << matricula << endl;
	cout << "Total de aulas frequentadas: " << frequencia << endl;
	cout << "Nota final: " << media << endl;
	cout << "Situação: aprovado" << endl; 
	aprovado++;}

	else { 
	cout << fixed << setprecision(1);	
	cout << "------------------------------------------" << endl;
	cout << "Número de matrícula: " << matricula << endl;
	cout << "Total de aulas frequentadas: " << frequencia << endl;
	cout << "Nota final: " << media << endl;
	cout << "Situação: reprovado" << endl; 
	reprovado++;}
}
	cout << fixed << setprecision(1);
	cout << "-----------------------------------------------------------------------" << endl;
	cout << "A maior e a menor nota da turma foram, respectivamente: " << maior_nota << " e " << menor_nota << endl;
	cout << "O total de alunos reprovados foi: " << reprovado << endl;
	cout << "A porcentagem de alunos reprovados por infrequência: " << p_reprovadof << "%" << endl;
	cout << "-----------------------------------------------------------------------" << endl;

system("pause");
return 0;
}	
