#include <iostream> 
#include <string.h>
#include "pt_br.h"
#define max 100

using namespace std;

char expressao[max], pilha[max];
int tamanho, topo = -1;
int a;

void push () {
    topo++;
    pilha[topo] = '(';
}

int pop () {
    if(topo > -1) {
       topo--;
       return 0;
    }   

    else {
        return 1;
    }       
}

void analise() {
    if (topo >= 0) {
        cout << "\nHá " << topo+1 << " parêntese(s) abrindo expressões que não foram fechadas.\n";
    } 
    
    else if (topo == -1) {
        cout << "\nTodos os parênteses foram fechados.\n";
    }
}

int main() {
    acentos();

    cout << "Digite uma expressão matemática: ";
    cin >> expressao;
    tamanho = strlen(expressao);

    for (int i=0; i<tamanho; i++) {
        cout << expressao[i];

        if (expressao[i] == '(') {
            push();
        }

        if (expressao[i] == ')') {
            a = pop();

            if (a == 1) {
                cout << "\n";
                cout << "\nNessa expressão há parênteses fechando expressões que não foram abertas."; 
                return 0;
            }
        }
    }

    analise();

    system("pause");
    return 0;
}