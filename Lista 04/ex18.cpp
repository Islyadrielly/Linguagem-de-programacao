/* 18)A comissão organizadora de um rallye automobilístico decidiu apurar os resultados da competição 
através de um processamento eletrônico. Um dos algoritmos necessários para a classificação das equipes 
concorrentes é o que emite uma listagem geral do desempenho das equipes, atribuindo pontos segundo 
determinadas normas: O algoritmo deverá ler:
A.1)uma linha contendo os tempos-padrão (em minutos decimais) para as três fases de competição;
A.2)um conjunto de linhas contendo cada uma o número de inscrição da equipe e os tempos 
(em minutos decimais) que as mesmas despenderam ao cumprir as três diferentes etapas. 
A última linha (flag), que não entrará nos cálculos, contém o número 9999 como número de inscrição.
B.Calcular 1) os pontos de cada equipe em cada uma das etapas, seguindo o seguinte critério. 
Seja ∆ o valor absoluto da diferença entre o tempo-padrão (lido na primeira linha) e o tempo 
despendido pela equipe numa etapa
• ∆ < 3 minutos – atribuir 100 pontos à etapa
• 3 <= ∆ <= 5 minutos – atribuir 80 pontos à etapa
• ∆ > 5 minutos – atribuir 80 – (∆ - 5)/5 pontos à etapa
B.2)o total de pontos de cada equipe nas três etapas;
B.3)a equipe vencedora.*/

#include <iostream>

using namespace std;

int main(){

    int n, n_campeao = 0;
    float num1, num2, num3, tempop1, tempop2, tempop3, etapa1, etapa2, etapa3, ponto1 =0, ponto2 =0, ponto3 =0, soma =0, campeao =0;

    cout << "Informe o tempo padrão 1: ";
    cin >> tempop1;
    cout << "Informe o tempo padrão 2: ";
    cin >> tempop2;
    cout << "Informe o tempo padrão 3: ";
    cin >> tempop3;

    do {

    cout << "-----------------------------------------------" << endl;
    cout << "Informe o número de inscrição da equipe: ";
    cin >> n;
    if (n == 9999)
      break;
    cout << "Informe o primeiro tempo: ";
    cin >> num1;  
    cout << "Informe o segundo tempo: ";
    cin >> num2;  
    cout << "Informe o terceiro tempo: ";
    cin >> num3;  
        
      etapa1 = tempop1 - num1;
      etapa2 = tempop2 - num2;
      etapa3 = tempop3 - num3;

      if (etapa1 < 3){
         ponto1 = 100;
      }
         else if (etapa1 >= 3 && etapa1 <= 5){
            ponto1 = 80;
         }
            else{
            ponto1 = 80 - ((etapa1 - 5) / 5);
            }  

      if (etapa2 < 3){
         ponto2 = 100;
      }
         else if (etapa2 >= 3 && etapa2 <= 5){
            ponto2 = 80;
         }

            else{
            ponto2 = 80 - ((etapa2 - 5) / 5);
            }

      if (etapa3 < 3){
         ponto3 = 100;
      }
         else if (etapa3 >= 3 && etapa3 <= 5){
            ponto3 = 80;
         }

            else{
            ponto3 = 80 - ((etapa3 - 5) / 5);
            }     

      soma = (ponto1 + ponto2 + ponto3);

      if (campeao == 0){
         campeao = soma;
         n_campeao = n;
         }

         else if(soma > campeao){
            campeao = soma;
            n_campeao = n;

    }

      cout << "Número de inscrição: " << n << endl;
      cout << "Pontos etapa 1: " << ponto1 << endl;
      cout << "Pontos etapa 2: " << ponto2 << endl;
      cout << "Pontos etapa 3: " << ponto3 << endl;
      cout << "Total de pontos: " << soma << endl;

   } while (n != 9999); 

   cout <<"Equipe Campeã: " << n_campeao << ", obteve um total de: " << campeao << " pontos." << endl;

system("pause");
return 0;    
}    