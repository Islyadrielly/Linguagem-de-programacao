/* 17)Um companhia de teatro planeja dar uma série de espetáculos. A direção calcula que, a R$ 5,00 o 
ingresso, serão vendidos 120 ingressos, e as despesas montarão em R$ 200,00. A diminuição de R$ 0,50 
no preço dos ingressos espera-se que haja um aumento de 26 ingressos vendidos. Fazer um algoritmo que 
escreva uma tabela de valores do lucro esperado em função do preço do ingresso, fazendo-se varias este preço 
de R$ 5,00 a R$ 1,00 de R$ 0,50 em R$ 0,50. Escreva, ainda, o lucro máximo esperado, o preço e o 
número de ingressos correspondentes.*/

#include <iostream>

using namespace std;

int main(){

    int qtd = 120, cnt =0;
    float vvenda, lucromax =0, lucro =0, i =0, venda =0;


    for(vvenda = 5.0; vvenda >=1.0; vvenda -=0.50) {
    if (vvenda < 5.0)
    qtd += 26;

    lucro = (vvenda * qtd) - 200;

    if (i==0)
    lucromax = lucro;
    i++;

    cout << "--------------------------------------" << endl;
    cout << "Valor do Ingresso...............: R$ " << vvenda << endl;
    cout << "Quantidade de ingressos vendidos: " << qtd << endl;
    cout << "Lucro esperado..................: R$ " << lucro << endl;


    if(lucro > lucromax) { 
    lucromax = lucro;
    venda = vvenda;
    cnt = qtd; }

}
    cout << "--------------------------------------" << endl;
    cout << "Lucro máximo..................: R$ " << lucromax << endl;
    cout << "Valor de venda................: R$ " << venda << endl;
    cout << "Número de Ingressos...........: " << cnt << endl;

system("pause");
return 0;    
}    