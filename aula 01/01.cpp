// Faça um programa que leia do teclado um numero inteiro n e em seguida leia n numeros reais e calcule a sua média
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    float media;
    int soma = 0;
    
    for(int i = 0; i < n; i++){
        float j;
        cin >> j;
        soma += j;
    }

    media = static_cast<float>(soma) / n;

    cout << media << endl;

    return 0;
}