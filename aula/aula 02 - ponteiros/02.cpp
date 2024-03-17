// Modifique o exercicio anterior e crie uma funcao para realizar a tarefa de calcular a media dos elementos do vetor.

#include <iostream>

using namespace std;

float calcMedia(int n, float vet[]){
    float soma = 0;

    for(int i = 0; i < n; i++){
        soma += *(vet + i);
    }

    return soma/n;
}

int main(){
    
    int N;
    cin >> N;

    float *vet = new float[N]; // Alocação dinâmica do vetor;

    for(int i = 0; i < N; i++){
        float v;
        cin >> v;
        *(vet + i) = v;
    }

    cout <<"Vetor: ";
    for(int i=0; i < N; i++){
        cout << *(vet + i) << " ";
    }

    cout <<"\nMedia: " << calcMedia(N, vet) << endl;

    delete[] vet;

    return 0;
}