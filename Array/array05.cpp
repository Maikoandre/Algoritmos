#include <iostream>
using namespace std;

void scanner(int vet[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        cin >> vet[i];
    }
}

int main(){
    int vet[10] = {};
    int pares;
    scanner(vet, 10);
    for (int o = 0; o < 10; o++){
        if(vet[o] % 2 == 0){
            pares++;
        }
    }
    cout << "Qtd pares: " << pares;
}