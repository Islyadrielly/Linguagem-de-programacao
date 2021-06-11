/* 1)Fazer um algoritmo que:•Leia um número indeterminado de linhas contendo cada uma a idade de um indivíduo.
• A última linha que não entrará nos cálculos, contém o valor da idade igual a zero.
• Calcule e escreva a idade média deste grupo de indivíduos. */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    float idade =0, soma =0, n =0, media =0;

    do {
        cout << "Digite a idade:\n";
        cin >> idade;

        soma += idade;
        n++;

        if (idade != 0) {
        n--;    
        
    }} while (idade != 0 && (idade > 0)); //enquanto verdadeiro, o loop será executado.

    media = (soma/n);

    cout << fixed << setprecision(1);
    cout << "A média das idades dos indivíduos é " << media << endl;

system("pause");
return 0;
    
}