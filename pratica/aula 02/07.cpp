// Crie uma funcao que recebe como parametro um vetor vet de elementos inteiros e seu tamanho n. Utilizando obrigatoriamente a funcao ̃ troca (Exercicio 4), a funcao
// deve inverter os elementos dentro do vetor original vet, trocando o primeiro elemento com o ultimo, o segundo com o penultimo, e assim por diante. Faca um programa
// que utilize sua func so para inverter os elementos de um vetor. Depois, imprima o vetor invertido.

#include <iostream>

using namespace std;

void troca (int *a, int *b){

    int aux = 0;
    aux = *a;
    *a = *b;
    *b = aux;
}

void inverte(int vet[], int n){
    for(int i = 0; i < n/2; i++){
        troca(&vet[i], &vet[n-i-1]);
    }
}

int main(){

    int vet[] = {1, 2, 3, 4, 5, 6};
    int n = 6;

    inverte(vet, n);

    cout << "vetor invertido: " << endl;
    for (int i = 0; i < 6; ++i) {
        cout << "v[" << i << "]: " << *(vet+i) << endl;
    }

    return 0;
}