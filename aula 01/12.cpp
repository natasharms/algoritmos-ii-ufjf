// Faça uma funcão que receba como parâmetros um vetor de numeros reais e o seu tamanho n e que retorne o maior valor par do vetor.

#include <iostream>

using namespace std;

int maiorPar(int vet[], int n){

    int aux = 0;

    for(int i = 0; i < n; i++){
        if (vet[i]%2==0){
            if (vet[i] > aux){
                aux = vet[i];
            }
        }
    }

    return aux;
}

int main(){

    int n;
    cin >> n;
    int *vet = new int[n];

    for(int i = 0; i < n; i++){

        cin >> vet[i];

    }

    cout << maiorPar(vet, n) << endl;

    return 0;
}