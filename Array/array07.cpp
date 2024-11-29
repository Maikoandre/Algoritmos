#include <iostream>
using namespace std;

void maiorElemento(int vet[], int tamanho);
void scanner(int vet[], int tamanho);
void print(int vet[], int tamanho);

int main(){
    int vet[10];
    scanner(vet, 10);
    print(vet, 10);
    maiorElemento(vet, 10);
}

void maiorElemento(int vet[], int tamanho){
    int maior = vet[0];
    int indice = 0;
    for(int i = 0; i < tamanho; i++){
        if(vet[i] > maior){
            maior = vet[i];
            indice = i;
        }
    }
    cout << endl << "Maior elemento: " << maior << endl;
    cout << "Indice: " << indice;
}

void scanner(int vet[], int tamanho){
    cout << "Digite os valores do vetor:" << endl;
    for(int i = 0; i < tamanho; i++){
        cin >> vet[i];
    }
}

void print(int vet[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        cout << vet[i] << " ";
    }
}