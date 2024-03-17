//Implemente agora o exercício (1) utilizando uma funcão que possua o seguinte prototipo:  ́float leCalculaMedia(int n)

#include <iostream>

using namespace std;

float leCalculaMedia(int n){
    float media;
    int soma = 0;
    
    for(int i = 0; i < n; i++){
        float j;
        cin >> j;
        soma += j;
    }

    media = static_cast<float>(soma) / n;

    return media;
}

int main()
{
    int n;
    cin >> n;
    
    float media = leCalculaMedia(n);

    cout << media << endl;

    return 0;
}

