#include <iostream> 

#define N 6

using namespace std;

int main() {
    int S, A[N] = {1,0,5,-2,-5,7}, i;

    S = A[0] + A [1] + A[5];
    
        cout << "S = " << S << endl;
        A[4] = 100;

        for(i=0; i<N; i++) {
            cout << "Vetor A: {" << i << "} = " << A[i] << endl;
        }

    system("pause");
    return 0;
}