/* 3)A conversão de graus Farenheit para centígrados é obtida por  Fazer um algoritmo que calcule e 
escreva uma tabela de centígrados em função de graus Farenheit, que variam de 50 a 150 de 1 em 1.*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  float C =0;
  int F =0;

for (F=50; F<=150; F++)
{
   C = (5.0/9) * (F-32);
   cout << fixed << setprecision(1);
   cout << F << " F é igual a " << C << " C." << endl;
}
  
system("pause");
return 0;
}