// Nome: Adrielly Isly Guerra da Silva
//   RA: 2840482111002 
   
#include <iostream> 

using namespace std;

int main() {
    float volume =0, peso =0;
    int comp =0, larg =0, prof =0, material =0;

    cout << "----------------------------------------" << endl;
    cout << "Digite o peso da peca em gramas: ";
    cin >> peso;
    cout << "Digite o comprimento, largura e profundidade dessa peca em centimetros: ";
    cin >> comp >> larg >> prof;
    cout << "Informe o Material da peca (1 - vidro, 2 - plastico ou 3 - metal): ";
    cin >> material;
    cout << "----------------------------------------" << endl;

    volume = (comp * larg * prof);

    //condições para material passar
    switch (material) 
    {
    case 1: if (larg > 25 && peso > 1000) 
            cout << "A peca passou no controle de qualidade." << endl;
            else if (volume > 35 && larg > 25 && prof < 10) 
            cout << "A peca passou no controle de qualidade." << endl;  
            else cout << "A peca nao passou no controle de qualidade." << endl; 
    break;

    case 2: if (peso <= 30000 && volume < 50 && prof < 100)
            cout << "A peca passou no controle de qualidade." << endl; 
            else cout << "A peca nao passou no controle de qualidade." << endl;           
    break;

    case 3: if (volume < 80 && peso < 100000 &&  comp > 10) 
            cout << "A peca passou no controle de qualidade." << endl;
            else cout << "A peca nao passou no controle de qualidade." << endl; 
            
    default: break;
    }

    system("pause");
    return 0;
}