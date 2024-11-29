#include <iostream>
using namespace std;

void scanner(int vet[], int tamanho);
float calcularMedia(int vet[], int tamanho);

int main(){
    int vet[15];
    scanner(vet, 15);
    cout << "Media: " << calcularMedia(vet, 15);
}

void scanner(int vet[], int tamanho){
    cout << "Digite os valores do vetor:" << endl;
    for(int i = 0; i < tamanho; i++){
        cin >> vet[i];
    }
}

float calcularMedia(int vet[], int tamanho){
    int soma = 0;
    for (int i = 0; i < tamanho; i++){
        soma += vet[i];
    }
    float media =  soma / tamanho;
    return media;
}
