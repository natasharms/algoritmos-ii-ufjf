// Faça uma funcão que receba como parametros um vetor de numeros reais e o seu tamanho n e que leia do teclado n numeros reais, guarde-os no vetor e calcule a sua média. A funcão deve retornar a media ao final. 
#include <iostream>

using namespace std;

float leVetorCalculaMedia(int n, float vet[]){

    float soma = 0;

    for(int i = 0; i < n; i++){
        float j;
        cin >> j;
        vet[i] = j;
        soma += vet[i];
    }

    return soma/n;
}

int main()
{
    int n;
    cin >> n;

    float vetor[n];

    float media = leVetorCalculaMedia(n, vetor);
    cout << media << endl;

    return 0;
}