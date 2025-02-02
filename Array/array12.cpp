#include <iostream>
using namespace std;

void scanner(int vet[], int tamanho);
void print(int vet[], int tamanho);
float calcularMedia(int vet[], int tamanho);
int maiorElemento(int vet[], int tamanho);
int menorElemento(int vet[], int tamanho);

int main(){
    int vet[5];
    scanner(vet, 5);
    print(vet, 5);
    cout << "Maior num do vetor: " << maiorElemento(vet, 5) << endl;
    cout << "Menor num do vetor: " << menorElemento(vet, 5) << endl;
    cout << "Media dos valores do vetor: " << calcularMedia(vet, 5) << endl;
}

void scanner(int vet[], int tamanho){
    cout << "Digite os valores do vetor:" << endl;
    for(int i = 0; i < tamanho; i++){
        cin >> vet[i];
    }
}

void print(int vet[], int tamanho){
    cout << "Valores do vetor: ";
    for(int i = 0; i < tamanho; i++){
        cout << vet[i] << " ";
    }
    cout << endl;
}

float calcularMedia(int vet[], int tamanho){
    int soma = 0;
    for (int i = 0; i < tamanho; i++){
        soma += vet[i];
    }
    float media =  soma / tamanho;
    return media;
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
