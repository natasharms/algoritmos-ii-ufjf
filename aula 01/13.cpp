// Escreva uma função que receba um vetor de números reais e seu tamanho n e leia valores do teclado para preencher todo o vetor apenas com valores negativos. 
// Os valores positivos digitados não devem ser inseridos no vetor e a leitura deve finalizar quando o vetor estiver preenchido.

#include <iostream>

using namespace std;

void vetorNegativo(float vet[], int n){

    for(int i = 0; i < n; i++){
        
        float aux;
        cin >> aux;
        
        if (aux < 0){
            vet[i] = aux;
        } else {
            cout << "Digite um valor NEGATIVO." << endl;
            i--;
        }
    }
}

void imprimeVetor(float vet[], int n){
    for(int i = 0; i < n; i++){
        cout << vet[i] << " ";
    }
}

int main(){

    int n;
    cin >> n;
    float *vet = new float[n];
    vetorNegativo(vet, n);
    imprimeVetor(vet, n);

    return 0;
}