/* 4)Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa. 
Para isto, mandou digitar uma linha para cada mercadoria com nome, preço de compra e preço de 
venda das mesmas. Fazer um algoritmo que:determine e escreva quantas mercadorias proporcionam: 
lucro < 10%, 10% ≤ lucro ≤ 20% e lucro > 20%. 
Determine e escreva o valor total de compra e de venda de todas as mercadorias, assim como o 
lucro total. Observação: o aluno deve adotar um flag.*/

#include <iostream>
#include <string>

// toupper para u case

using namespace std;

int main() {
    int lucrinho =0, lucro =0, lucrao =0;
    string nome;
    float pc, pv, total_pc = 0, total_pv = 0, total_lucro;
    char continua = 'S';

    while(continua == 'S') {
        cout << "Nome: ";
        cin >> nome;
        cout << "Preço de compra: ";
        cin >> pc;
        cout << "Preço de venda: ";
        cin >> pv;

        total_lucro = pv/pc -1;

        if(total_lucro < 0.1)
            lucrinho++;

        else if(total_lucro <= 0.2)
             lucro++;

        else lucrao++;      

        total_pc += pc;
        total_pv += pv;  

        cout << "Deseja inserir mais produtos? [S/N] " << endl;
        cin >> continua;
    }    

    cout << "Produtos com lucro < 10% " << lucrinho << endl;
    cout << "Produtos com lucro entre 10% e 20% " << lucro << endl;
    cout << "Produtos com maior que 20% " << lucrao << endl;
    cout << "Total de compra:  " << total_pc << endl;
    cout << "Total de venda:  " << total_pv << endl;

    system("pause");
    return 0;
}    