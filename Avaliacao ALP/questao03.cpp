// Nome: Adrielly Isly Guerra da Silva
//   RA: 2840482111002 
  
#include <iostream> 
#include <string>

using namespace std;

int main() {
    string flag;
    float variacao=0, cotacao1=0, cotacao2=0, cotacao3=0, alta=0, baixa=0, prejuizo =0, lucro =0;

    while(flag != "N") 
    {
        cout << "Informe as cotacoes dos ultimos 3 dias sequencialmente: ";
        cin >> cotacao1 >> cotacao2 >> cotacao3;

        //calculo da variação entre as cotações
        variacao = (cotacao3 - cotacao2) + (cotacao2 - cotacao1);

        //lucro e prejuizo
        if (variacao >0)
             alta++;
            
        if (variacao > lucro)
             lucro = variacao;

        if (variacao <0) {
            baixa++;
            if (variacao < prejuizo)
                prejuizo = variacao; 
        }
        cout << "Deseja inserir novo ativo? [S/N]";
        cin >> flag;
    }

    cout << "Ativos com tendencia de alta: "<< alta << endl;
    cout << "Ativos com tendencia de baixa: "<< baixa << endl;
    cout << "Ativo mais lucrativo: " << lucro << endl;
    cout << "Ativo mais prejudicial: " << prejuizo << endl;

    system("pause");
    return 0;
}  