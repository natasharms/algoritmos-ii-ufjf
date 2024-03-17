// Escreva uma funcão que leia um numero n que indicara a quantidade de numeros inteiros positivos que devem ser lidos a seguir. 
// A funcão deve imprimir uma tabela onde cada linha deve conter um dos valores inteiros lidos, quadrado do seu valor, a raiz quadrada do seu valor e seu fatorial.

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int fatorial(int num){
    if (num == 0)
        return 1;

    int f = 1;

    for(int i = 2; i <= num; i++){
        f *= i;
    }

    return f;
}

void tabela(int n){

    int vet[n];

    for(int i = 0; i < n; i++){
        cin >> vet[i];
    }

    for(int i = 0; i < n; i++){
        int aux = vet[i];
        int square = aux * aux;
        double squareRoot = sqrt(aux);
        int fat = fatorial(aux);

        cout << aux << " ";
        cout << square << " ";
        cout << setprecision(2) << squareRoot << " ";
        cout << fat << endl;
    }
}

int main()
{
    int n;
    cout << "Digite um numero inteiro maior que 0: " << endl;
    cin >> n;

    tabela(n);

    return 0;
}