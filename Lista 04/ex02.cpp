/* 2)Tem-se um conjunto de dados contendo a altura e o sexo (masculino, feminino) de 50 pessoas. 
Fazer um algoritmo que calcule e escreva:
• a maior e a menor altura do grupo; 
• a média de altura das mulheres; 
• o número de homens; */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int mulheres, homens, i, sx;
    float altura, media, maior, menor, altura_m;
    
    altura = media = maior = menor = altura_m = homens = mulheres =0;

    //entrada de dados:
  for (i=1; i<=50; i++) 
  {
        cout << "Considere (1) Feminino e (2) Masculino." << endl;
        cout << "Qual o seu gênero? ";
        cin >> sx;
        cout << "Informe sua altura: ";
        cin >> altura;
    
    //altura maior e menor.
    if (altura > maior)
    {  
       (maior = altura);
       (menor = maior);
    } 
    else
      if (altura < menor)
      { 
         (menor = altura);
      }    

    // contador mulheres e media_m
    if (sx == 1) 
    {
        mulheres++;
        altura_m+= altura; 
        media = (altura_m/mulheres);
    }
    else
       if (sx ==2) 
    {
          homens++;
    }
  }     
        // maior e menor altura   
        cout << "A maior altura do grupo é: " << maior << endl;
        cout << "A menor altura do grupo é: " << menor << endl;
        
        // média de altura das mulheres
        cout << fixed << setprecision(1);
        cout << "A média de altura das mulheres é igual a: " << media << endl;

        // quantidade de homens
        cout << "A quantidade de homens é igual a: " << homens << endl;


system("pause");
return 0;
}    