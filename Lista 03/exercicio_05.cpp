/* 5) Faça um algoritmo que leia dois valores inteiros A e B se os valores forem 
iguais deverá se somar os dois, caso contrário multiplique A por B. 
Ao final de qualquer um dos cálculos deve-se atribuir o resultado para uma variável C 
e mostrar seu conteúdo na tela.*/

#include <iostream>


using namespace std;

int main () 
{
    system("color 03");

        // declaração das variáveis:
        int a, b, res;

        cout << "Informe o primeiro número inteiro: ";
        cin >> a;

        cout << "Informe o segundo número inteiro: ";
        cin >> b;
        
        // condicionais e resultados
        if (a == b) { // == é igual, != é diferente
            res = a + b;
                  cout << "A soma entre os números é igual a: " << res << endl;
            }  
                else if (a != b) {
                    res = a * b;
                          cout << "A multiplicação entre os números é igual a: " << res << endl;
                }  

system("pause");
return 0;

}                