#include <iostream>
using namespace std;

void scanner(float vet[], int tamanho);
void quantidadeNegativos(float vet[], int tamanho);
void somaPositivos(float vet[], int tamanho);

int main(){
    float vet[3];
    scanner(vet,3);
    quantidadeNegativos(vet, 3);
    somaPositivos(vet, 3);
}

void scanner(float vet[], int tamanho){
    cout << "Digite os valores do vetor:" << endl;
    for(int i = 0; i < tamanho; i++)
        cin >> vet[i];
}

void quantidadeNegativos(float vet[], int tamanho){
    int qtd = 0;
    for (int i = 0; i < tamanho; i++)
        if(vet[i] < 0) qtd++;
    cout << "O vetor tem " << qtd << " numeros negativos." << endl;
}

void somaPositivos(float vet[], int tamanho){
    float soma = 0;
    for(int i = 0; i < tamanho; i++)
        if(vet[i] > 0) soma += vet[i];
    cout << "Soma dos num pares do vetor: " << soma << endl;
}