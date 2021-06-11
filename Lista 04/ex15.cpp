/* 5)Os bancos atualizam diariamente as contas de seus clientes. Essa atualização envolve a análise 
dos depósitos e retiradas de cada conta. Numa conta de balanço mínimo, uma taxa de serviço é deduzida 
se a conta cai abaixo de uma certa quantia especificada. Suponha que uma conta particular comece o dia 
com um balanço de R$ 60,00. O balanço mínimo exigido é R$ 30,00 e se o balanço de fim de dia for menor 
do que isso, uma taxa é reduzida da conta. A fim de que essa atualização fosse feita utilizando computador, 
é fornecido o seguinte conjunto de dados:
• a primeira linha contém o valor do balanço mínimo diário, quantidade de transações e taxa de serviço;
• as linhas seguintes contém número da conta, valor da transação e código da transação (depósito ou retirada);
Escrever um algoritmo que: • calcule o balanço (saldo/débito) da conta ao fim do dia (se o resultado for negativo, 
isto significa insuficiência de fundos na conta); • escreva, para cada conta, o seu número e o balanço calculado. 
Se não houver fundos, imprima o número da conta e a mensagem “NÃO HÁ FUNDOS”.*/

#include <iostream>

using namespace std;

int main(){

    float min =0, taxa =0, valor =0, saldo =0;
    int t =0, conta =0, codigo =0;

    saldo =0;

    cout << "Informe o valor do balanço mínimo exigido: ";
    cin >> min;
    cout << "Digite a quantidade de transações: ";
    cin >> t;
    cout << "Informe o valor da taxa de serviço: ";
    cin >> taxa;

    do {
	    cout << "Informe o número da conta: ";
	    cin >> conta;
	    cout << "Digite o valor da transação: ";
	    cin >> valor;
	    cout << "Informe o tipo da transação [1] Depósito ou [2] Retirada: ";
	    cin >> codigo;

        if (codigo ==1)
	        saldo+= valor;
        else if (codigo ==2)
	        saldo-= valor;
        else cout << "Código inválido." << endl;
        t--;
    } while (t != 0);

        if(saldo < min) {
	        saldo = (saldo*taxa)/100;    
	        cout << "Conta: " << conta << endl;
            cout << "[NÃO HÁ FUNDOS]" << endl;}
        else {cout << "Conta: " << conta << endl;
              cout << "Saldo Atual: R$ " << saldo << endl;}

system("pause");
return 0;    
}