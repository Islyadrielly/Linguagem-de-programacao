/* 17)Um companhia de teatro planeja dar uma série de espetáculos. A direção calcula que, a R$ 5,00 o 
ingresso, serão vendidos 120 ingressos, e as despesas montarão em R$ 200,00. A diminuição de R$ 0,50 
no preço dos ingressos espera-se que haja um aumento de 26 ingressos vendidos. Fazer um algoritmo que 
escreva uma tabela de valores do lucro esperado em função do preço do ingresso, fazendo-se varias este preço 
de R$ 5,00 a R$ 1,00 de R$ 0,50 em R$ 0,50. Escreva, ainda, o lucro máximo esperado, o preço e o 
número de ingressos correspondentes.*/

#include <iostream>

using namespace std;

int main() {
    int ingressos;
    float preco, lucro, max_lucro = 0, melhor_preco, melhor_ingresso;

    cout << "|\tPreco\t|\tIngr.\t|\tLucro\t|" << endl;
    for (preco=5.0, ingressos=120; preco >= 1.0; preco -= .5, ingressos+=26) {
        lucro = preco * ingressos - 200;
        cout << "|\t" << preco << "\t|\t" << ingressos << "\t|\t" << lucro << "\t|\t"<< endl;        
        if (lucro > max_lucro) {
            max_lucro = lucro;
            melhor_preco = preco;
            melhor_ingresso = ingressos;
        }
    }
    cout << "|--------------------------------------------|" << endl;
    cout << "Lucro máximo: " << max_lucro << endl;
    cout << "Preço: " << melhor_preco << endl;
    cout << "Ingressos: " << melhor_ingresso << endl;
    return 0;
}
