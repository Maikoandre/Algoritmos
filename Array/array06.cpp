#include <iostream>
using namespace std;

int maiorElemento(int vet[], int tamanho);
int menorElemento(int vet[], int tamanho);
void scanner(int vet[], int tamanho);

int main(){
    int vet[10];
    scanner(vet, 10);
    cout << "Maior elemento: " << maiorElemento(vet, 10) << endl;
    cout << "Menor elemento: " << menorElemento(vet, 10);
}

int maiorElemento(int vet[], int tamanho){
    int maior = vet[0];
    for(int i = 0; i < tamanho; i++){
        if(vet[i] > maior){
            maior = vet[i];
        }
    }
    return maior;
}

int menorElemento(int vet[], int tamanho){
    int menor = vet[0];
    for(int i = 0; i < tamanho; i++){
        if(vet[i] < menor){
            menor = vet[i];
        }
    }
    return menor;
}

void scanner(int vet[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        cin >> vet[i];
    }
}