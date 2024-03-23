#include <iostream>

using namespace std;

int main(){

    int a = 1, b = 2, c = 3, *v, *px, *py, *pz;

// Faca px e py apontarem, respectivamente, para a e b.
    px = &a;
    py = &b;

// Incremente o valor de a.
    (*px)++;

// Atribua o valor de c ao local apontado por py
    *py = c;

// Aloque um vetor de 3 elementos inteiros e armazene o endereco resultante em v.
    int *vet;
    vet = new int[3];
    v = &vet[0];

// Preencha a ultima posicao do vetor com o valor 10.
    *(vet + 2) = 10;

// Faca pz apontar para a primeira posicão do vetor.
    pz = vet;

// Usando aritmetica de ponteiros, preencha as duas primeiras posicoes do vetor com o valor de b e o valor apontado por px, nesta ordem.
    *(vet) = b;
    *(vet + 1) = *px;

// Imprima os conteudos das variaveis a, b e c e o conteudo do vetor.

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    cout <<"Vetor: ";
    for(int i=0; i < 3; i++){
    cout << *(vet + i) << " ";
    }

    delete[] vet;
    

return 0;
}