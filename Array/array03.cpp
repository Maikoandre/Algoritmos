#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float vet[10] = {1.4, 7.7, 3.6, 1.0, 3.6, 6.9, 7.8, 2.5, 9.9, 10.10};
    float result[10] = {};
    for(int i = 0; i < 10; i++){
        result[i] = pow(vet[i], 2.0);
    }
    for(int i = 0; i < 10; i++){
        cout << result[i] << " - ";
    }
}