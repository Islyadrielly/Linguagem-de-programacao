/* 11)Uma universidade deseja fazer um levantamento a respeito do seu concurso vestibular. Para cada 
curso, é fornecido o seguinte conjunto de valores:
• o código do curso;
• o número de vagas;
• número de candidatos do sexo masculino;
• número de candidatos do sexo feminino; 
O último conjunto, para indicar fim de dados, contém o código do curso igual a zero. 
Fazer um algoritmo que:
• calcule escreva, para cada curso, o número de candidatos por vaga e a porcentagem de candidatos 
do sexo feminino (escreva também o código correspondente do curso); 
• determine o maior número de candidatos por vaga e escreva esse número juntamente com o código do 
curso correspondente (supor que não haja empate);
• calcule e escreva o total de candidatos; */

#include <iostream>

using namespace std;

int main() {

    int cod, vagas =0, masc =0, fem =0, i, maior =0;
    float porvaga =0, total =0, cnt_fem =0, cnt_masc =0, p_fem =0;
    
      do {                           
      cout << "Informe o Cogido do Curso desejado: [Digite 0 quando desejar finalizar] "; 
      cin >> cod;
      
          if(cod == 0)
            break;
          else {

          cout << "Quantidade de vagas para o curso: ";
          cin >> vagas;

          cout << "Quantidade de candidatos homens: ";
          cin >> masc;

          cout << "Quantidade de candidatas mulheres: ";
          cin >> fem; }

          cnt_masc += masc;
          cnt_fem += fem;

          //processamento dos dados
            total =  masc +  fem;
            porvaga = total/vagas;
            p_fem = (((float)fem/(float)vagas)*100);

            if (porvaga > maior) 
            (maior = porvaga);

            total =  cnt_masc +  cnt_fem;

          cout << "-----------------------------------------------------" << endl;   
          cout << "Curso: " << cod << endl;
          cout << "Vagas: " << vagas << endl; 
          cout << "Número de candidatos por vaga: " << porvaga << endl;
          cout << "Porcentagem de candidatas do sexo Feminino: " << p_fem << "%" << endl;  
      }
      while(cod != 0);   

      cout << "-----------------------------------------------------" << endl;   
      cout << "Curso com maior número de candidatos por vaga: " << maior << endl;
      cout << "O número total de candidatos foi de: " << total << endl;
      cout << "-----------------------------------------------------" << endl;


    system("pause");
    return 0;
}   