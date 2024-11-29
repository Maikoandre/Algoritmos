#include <iostream>
#include <cmath>
using namespace std;

void scanner(int vet[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        cin >> vet[i];
    }
}

void lerValores(int &a, int &b){
    cin >> a >> b;
}

int main(){
    int primeiroIndice, segundoIndice;
    int vet[8] = {};
    cout << "Digite os valores do vetor (8 elementos):" << endl;
    scanner(vet, 8);
    cout << "Digite dois índices:" << endl;
    lerValores(primeiroIndice, segundoIndice);
    for(int i = 0; i < 8; i++){
        if (i == primeiroIndice){
            cout << primeiroIndice * vet[i] << " ";
        }else if(i == segundoIndice){
            cout << segundoIndice * vet[i] << " ";
        }
    }
}