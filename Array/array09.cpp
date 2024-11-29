#include <iostream>
using namespace std;

void scanner(int vet[], int tamanho);
void print(int vet[], int tamanho);

int main(){
    int vet[10];
    scanner(vet, 10);
    print(vet, 10);
}

void scanner(int vet[], int tamanho){
    cout << "Digite valores pares para o vetor:" << endl;
    for(int i = 0; i < tamanho; i++){
        cin >> vet[i];
        while(vet[i] % 2 != 0){
            cout << "Numero invalido! Digite novamente: ";
            cin >> vet[i];
        }
    }
}

void print(int vet[], int tamanho){
    cout << "Valores invertidos:" << endl;
    for(int i = tamanho - 1; i >= 0; i--){
        cout << vet[i] << " ";
    }
}