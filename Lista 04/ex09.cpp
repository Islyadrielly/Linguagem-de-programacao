/* 9)Foi feita uma pesquisa para determinar o índice de mortalidade infantil em um certo período. 
Fazer um algoritmo que:•leia inicialmente o número de crianças nascidas no período;
• leia, em seguida um número indeterminado de linhas, contendo, cada uma, o sexo de uma criança 
morta (M, F) e o número de meses de vida da criança. A última linha, que não entrará nos cálculos, 
contém no lugar do sexo a letra V;
• determine e imprima:
a) a porcentagem de crianças mortas no período;
b) a porcentagem de crianças do sexo masculino mortas no período;
c) a porcentagem de crianças que viveram 24 meses ou menos no período.*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int cri_nasc =0;
    float cri_mortas =0, cri_m_mortas =0, cri_v24 =0, pcri_mortas =0, pcri_m_mortas =0, pcri_v24=0, idade =0;
    char sx; 

    cout << "Informe o número de crianças nascidas no periodo: ";
    cin >> cri_nasc;

    do { 
        cout << "Para interromper a execução digite (V)." << endl;
        cout << "Digite o sexo de uma criança morta (M, F) e o número de meses de vida da criança:" << endl;
        cin >> sx;
        if (sx != 'V')
            cin >> idade; //se a resposta for V, ele não pedirá a idade

        if (sx == 'M')
            cri_m_mortas++;

        if (idade <= 24)
            cri_v24++;
            
        cri_mortas++;
        
    } while(sx != 'V');

    cri_mortas--;

    cout << cri_mortas << " " << cri_v24 << endl;

    pcri_mortas = (cri_mortas / cri_nasc) * 100; 
    pcri_m_mortas = (cri_m_mortas / cri_mortas) * 100;
    pcri_v24 = (cri_v24 / cri_mortas) * 100;
    cout << pcri_v24 << endl;

    cout << "-----------------------------------------------------------------------------" << endl;
    cout << fixed << setprecision(1);
    cout << "A porcentagem de crianças mortas no periodo foi de: " << pcri_mortas << "%." << endl;
    cout << "A porcentagem de crianças do sexo masculino mortas no periodo foi de: " << pcri_m_mortas << "%." << endl;
    cout << "A porcentagem de crianças que viveram 24 meses ou menos foi de: " << pcri_v24 << "%." << endl;
    cout << "-----------------------------------------------------------------------------" << endl;

    system("pause");
    return 0;
}    