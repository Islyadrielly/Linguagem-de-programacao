/* 13)Deseja-se fazer uma pesquisa a respeito do consumo mensal de energia elétrica em uma determinada 
cidade. Para isso, são fornecidos os seguintes dados: 1)preço do kWh consumido; 2)número do consumidor;
3)quantidade de kWh consumidos durante o mês; 4)código do tipo de consumidor (residencial, comercial, industrial).
O número do consumidor igual a zero deve ser usado como flag. Fazer um algoritmo que:
a) calcule para cada consumidor, o total a pagar;
b) o maior consumo verificado;
c) o menor consumo verificado;
d) o total do consumo para cada um dos três tipos de consumidores; 
e) a média geral de consumo;*/

#include <iostream>

using namespace std;

int main() {

    float p_kwh =0, kwh_mes =0, total =0, maior =0, menor =0, media_consumo =0, aux =0; 
    int consumidor =0, cod =0, res =0, com =0, ind =0, i =0; 

    cout << "Informe o preco do kWh: ";
    cin >> p_kwh; 

do {
	cout << "-----------------------------------------------------" << endl;
	cout << "Digite o numero do consumidor: ";
	cin >> consumidor;
	cout << "Qual foi a quantidade de kWh consumido no mês: ";
	cin >> kwh_mes;
	cout << "(1) Residencial......................................" << endl;
	cout << "(2) Comercial........................................" << endl;
	cout << "(3) Industrial......................................." << endl;
	cout << "Informe o tipo de consumidor: ";
	cin >> cod;

	i++;
	if(consumidor ==0) {
		i--;
		break;	
	}

	//total de consumo para cada um dos 3 tipos
	switch (cod) { 
		case 1: res+= kwh_mes; 
			break;
		case 2: com+= kwh_mes;
			break;
		case 3: ind+= kwh_mes;
			break;
	}
	//total a pagar por consumidor		
	total = kwh_mes * p_kwh; 	

    aux = kwh_mes;

    if(i ==0){
       maior = aux;
       menor = aux; 
    } 

	//maior consumo
	if(kwh_mes > maior)
	maior = kwh_mes;

	maior = menor;

	//menor consumo
	if (kwh_mes < menor);
	menor = kwh_mes;

	//media geral de consumo
	if(kwh_mes > 0)
	media_consumo = (res+com+ind)/i;	

	cout << "-----------------------------------------------------" << endl;
	cout << "Numero do consumidor: " << consumidor << endl; 				
	cout << "Total a pagar: " << total << endl;
} 
while(consumidor !=0);

	cout << "-----------------------------------------------------" << endl;
	cout << "O maior consumo verificado: " << maior << endl;
	cout << "O menor consumo verificado: " << menor << endl;
	cout << "O total de consumo para consumidor Residencial: " << res << endl;
	cout << "O total de consumo para consumidor Comercial: " << com << endl;
	cout << "O total de consumo para consumidor Industrial: " << ind << endl; 
	cout << "A media geral de consumo: " << media_consumo << endl;

system("pause");
return 0;
}