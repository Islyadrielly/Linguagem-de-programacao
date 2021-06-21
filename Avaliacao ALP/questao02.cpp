// Nome: Adrielly Isly Guerra da Silva
//   RA: 2840482111002 

#include <iostream>

using namespace std;

int main() {
    
    int i=0, num=0, multiplo3=0, primo=0, div=0;

    //para interromper a execução do programa, num deve ser igual a 9999;

    while (num != 9999)
    {     
        cout << "Digite um numero: ";
        cin >> num;

        if(num ==9999)
        break;

        for(i=2; i<=num/2; i++)
        {
            if(num%i==0)
            div++;
        }    
  
            if(div==0)
            {
            cout<<"E primo"<<endl;
            primo++; 
            }
            else
            cout<<"Nao e primo"<<endl;

            div =0; //zerando durante a execução do código, pois sem isso, durante o loop div ficaria acumulando
              
            if (num % 3 ==0) 
            {
                cout << "E multiplo de 3."<< endl;
                multiplo3++;  
            }
            else cout << "Nao e multiplo de 3." << endl;
                 cout << "-----------------" << endl;                    
    }

    cout << "Durante a execucao do programa " << primo << " numeros foram primos" << endl;
    cout << "e " << multiplo3 << " numeros foram multiplos de 3." << endl;

    system("pause");
    return 0;
}