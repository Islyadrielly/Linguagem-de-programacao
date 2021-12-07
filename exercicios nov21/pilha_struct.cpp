// Atividade: Implemente uma pilha de inteiros utilizando struct.
/* Existem algumas "gambiarras" no código para resolver problemas que não
consegui resolver de outra forma. */


#include <iostream> 
#include "pt_br.h"
#define max 9

using namespace std;

typedef struct Estrutura_pilha {
    int vetor[max];
    int topo;
} Tipo_pilha;

Tipo_pilha pilha;
int i;
void insere () {
    if(pilha.topo<max) { 
            cout << "\n";
            cout << "Digite o valor que deseja inserir na pilha: ";
            pilha.topo = pilha.topo + 1;  
            fflush(stdin);       
            cin >> i; 
            pilha.vetor[pilha.topo] = i;
    }
        else {
            cout << "A pilha está cheia, remova algum elemento para adicionar mais.\n";
        }
}

void remove() {
    if(pilha.topo > -1){
        if(pilha.topo == 10){
            pilha.topo = pilha.topo - 2;    
        }
        else {
            pilha.topo = pilha.topo -1;
        }   
        cout << "\n";
        cout << "Elemento removido do topo com sucesso.\n";
    } 
    else {
        cout << "\n";
        cout << "Não é possível executar essa ação pois não existem elementos na pilha.\n";
    }       
}    

void exibir() {

    if (pilha.topo > (-1)) {
        cout << "\n";
        cout << "| ";

        if(pilha.topo == 10) {
            for(int i = 0; i < 10; i++){
                cout << pilha.vetor[i] << " | ";
            }
        }
          
        else {
            for (int i=0; i <=pilha.topo; i++) {
                cout << pilha.vetor[i] << " | ";
            }   
        }

        cout << "\n";
    } 
    
    else {
          cout << "\n";  
          cout << "Não é possível executar essa ação pois não existem elementos na pilha.\n";  
    }     
}

int main() {
    acentos();
    pilha.topo =-1;
    int opcao;

    while(true) //ficará repetindo o MENU 
    { 

        cout << "\n";
        cout << "----------PILHA----------" << endl;
        cout << "[1] Inserir elemento.\n";
        cout << "[2] Remover elemento.\n";
        cout << "[3] Exibir pilha.\n";
        cout << "[9] Sair.\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;
        cout << "-------------------------\n";
        system("cls");

        switch (opcao) {
            case 1: insere(); break;
            case 2: remove(); break;
            case 3: exibir(); break;
            case 9: return 0;
            default: cout << "\nEscolha uma opção válida."; break;
        }
    }
    return 0;
}