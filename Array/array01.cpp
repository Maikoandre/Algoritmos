#include <iostream>
using namespace std;

int main(){
    int soma = 0;
    int vet[6] = {1, 0, 5, -2, -5, 7};
    for(int i = 0; i < 6; i++){
        if(i == 0 || i == 1 || i == 5){
            soma += vet[i];
        }
    }
    vet[3] = 100;
    for(int i = 0; i < 6; i++){
        cout << vet[i] << endl;
    }
    cout << soma << endl;
}