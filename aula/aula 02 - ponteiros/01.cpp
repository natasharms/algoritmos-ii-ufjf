// Faca um programa que leia um numero inteiro N e que aloque dinamicamente um vetor com N elementos reais e faca a leitura dos seus valores. Em seguida, calcule a
// media dos valores do vetor e imprima na tela. Por fim, libere a memoria alocada de forma dinamica.

#include <iostream>

using namespace std;

int main(){
    
    int N;
    cin >> N;

    float *vet = new float[N]; // Alocação dinâmica do vetor;
    float soma = 0;

    for(int i = 0; i < N; i++){
        float v;
        cin >> v;
        *(vet + i) = v;
        soma += v;
    }

    cout <<"Vetor: ";
    for(int i=0; i < N; i++){
        cout << *(vet + i) << " ";
    }

    float media = soma / N;

    cout <<"\nMedia: " << media << endl;

    delete[] vet;

    return 0;
}