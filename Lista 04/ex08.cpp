/* 8)Uma certa firma fez uma pesquisa de mercado para saber se as pessoas gostaram ou não de um novo 
produto lançado no mercado. Para isso, forneceu o sexo do entrevistado e sua resposta (sim ou não). 
Sabendo-se que foram entrevistadas 2.000 pessoas, fazer um algoritmo que calcule e escreva:
• o número de pessoas que responderam sim;•o número de pessoas que responderam não;
• a porcentagem de pessoas do sexo feminino que responderam sim;
• a porcentagem de pessoas do sexo masculino que responderam não; */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    char sexo, like;
    float f_sim =0, m_nao =0, aux =0, p_f =0, p_m =0;
    int s =0, n =0, mulheres =0, homens =0;

    for(int i =0; i<2000; i++) {
        cout << "Qual o seu sexo? [F/M]" ;
        cin >> sexo;
        cout << "Você gostou do novo produto? [S/N] ";
        cin >> like;
        aux++;

        if (sexo == 'F')
            mulheres++;
        else homens ++;    

        if (like == 'S')
            s++;
        else n++;    

        if (sexo == 'F' && (like == 'S'))
            f_sim++;
        else if (sexo == 'M' && (like == 'N'))
            m_nao++;
    }

    p_f = (f_sim / mulheres) * 100;
    p_m = (m_nao / homens) * 100;

    cout << "--------------------------------------------------------------------" << endl;
    cout << "O número de pessoas que responderam sim: " << s << endl;
    cout << "O número de pessoas que responderam não: " << n << endl;
    cout << fixed << setprecision(1);
    cout << "a porcentagem de pessoas do sexo feminino que responderam sim: " << p_f << "%." << endl;
    cout << "a porcentagem de pessoas do sexo masculino que responderam não: " << p_m << "%." << endl;
    cout << "--------------------------------------------------------------------" << endl;

    system("pause");
    return 0;
}   