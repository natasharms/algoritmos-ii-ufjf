// Implemente uma unica funcao que receba um vetor de numeros inteiros (vet) e o seu tamanho (tam) e:

#include <iostream>

using namespace std;

bool func(int tam, int vet[], int *par, int *impar, int *negativos){

    for(int i = 0; i < tam; i++) {
        if(vet[i] % 2 == 0) { // conte o total de elementos pares
            (*par)++;
        } else { // conte o total de elementos  ́ımpares
            (*impar)++;
        }

        if(vet[i] < 0) { // conte o total de elementos negativos
            (*negativos)++;
        }
    }

    return *negativos > 0; // retorne verdadeiro se existirem numeros negativos
}

int main(){

    int tam = 5;
    int vet[] = {1, 2, 3, 4, -1};
    int p = 0;
    int i = 0;
    int n = 0;

    int *par = &p;
    int *impar = &i;
    int *negativo = &n;

    bool f = func(tam, vet, par, impar, negativo);

    cout << "pares: " << p << endl;
    cout << "impares: " << i << endl;
    cout << "negativos: " << n << endl;
    cout << boolalpha << f << endl;


    return 0;
}