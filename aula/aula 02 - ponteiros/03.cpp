// Modifique o exercicio anterior e crie agora uma funcao para alocar vetores de numeros reais de tamanho N de forma dinamica.

#include <iostream>

using namespace std;

float calcMedia(int n, float vet[]){
    float soma = 0;

    for(int i = 0; i < n; i++){
        soma += *(vet + i);
    }

    return soma/n;
}

float* alocaVetor(int n){

    float *vet = new float[n]; // Alocação dinâmica do vetor;

    for(int i = 0; i < n; i++){
        float v;
        cin >> v;
        *(vet + i) = v;
    }

    return vet;
}

int main(){
    
    int N;
    cin >> N;

    float *vet = alocaVetor(N);

    cout <<"Vetor: ";
    for(int i=0; i < N; i++){
        cout << *(vet + i) << " ";
    }

    cout <<"\nMedia: " << calcMedia(N, vet) << endl;

    delete[] vet;

    return 0;
}