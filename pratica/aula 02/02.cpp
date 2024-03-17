#include <iostream>

using namespace std;

int main(){
    
    int a=10, b=20, c=30, v[3], *pti, *pti1, *pti2;
    pti1 = &a;
    pti2 = &b;

    //Usando pti1 e pti2, faca com que a e b recebam o valor de c.
    cout << "pti1: " << pti1 << endl;
    cout << "pti2: " << pti2 << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    *pti1 = c;
    *pti2 = c;
    cout << "\npti1: " << pti1 << endl;
    cout << "pti2: " << pti2 << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;

    // Usando pti e aritmetica de ponteiros, preencha o vetor v com os valores de seus ́ındices somados de 1.
    cout << "\nValores do vetor v antes: " << endl;
    for (int i = 0; i < 3; ++i) {
        cout << "v[" << i << "]: " << *(v+i) << endl;
    }
    
    pti = &v[0]; // pti apontando para o primeiro elemento de v

    for (int i = 0; i < 3; ++i) {
        *pti = i + 1; 
        pti++; // pti foi inicializado para apontar para o primeiro elemento de v, então pti++ faz com que ele aponte para o próximo elemento na memória
    }

    cout << "\nValores do vetor v depois: " << endl;;
    for (int i = 0; i < 3; ++i) {
        cout << "v[" << i << "]: " << *(v+i) << endl;
    }

    // Usando pti, atribua a variavel a o valor da primeira posicao do vetor acrescido de 99.
    pti = &a;
    *pti = *v + 99;
    cout << "\na: " << a << endl;

    // Usando pti1 e pti2, atribua a primeira posicao do vetor a soma dos valores de a e b
    *v = *pti1 + *pti2;

    cout << "\nValores do vetor v depois: " << endl;;
    for (int i = 0; i < 3; ++i) {
        cout << "v[" << i << "]: " << *(v+i) << endl;
    }

    // Atribua a segunda posicao do vetor o conteudo apontado por pti2.
    *(v+1) = *pti2;

    cout << "Valores do vetor v depois: " << endl;;
    for (int i = 0; i < 3; ++i) {
        cout << "v[" << i << "]: " << *(v+i) << endl;
    }

    // Usando aritmetica de ponteiros, atribua a terceira posicao do vetor o conteudo apontado por pti
    *(v+2) = *pti;

    cout << "\nValores do vetor v depois: " << endl;;
    for (int i = 0; i < 3; ++i) {
        cout << "v[" << i << "]: " << *(v+i) << endl;
    }

    // Usando ponteiros, incremente o valor de b e decremente o valor da segunda posicao do vetor
    cout << "\nb: " << b << endl;
    cout << "pti2: " << *pti2 << endl;

    (*pti2)++;
    cout << "pti2: " << *pti2 << endl;

    pti = &v[1];  
    (*pti)--;

    cout << "\nValores do vetor v depois: " << endl;;
    for (int i = 0; i < 3; ++i) {
        cout << "v[" << i << "]: " << *(v+i) << endl;
    }
    cout << "\npti1: " << pti1 << endl;
    cout << "pti2: " << pti2 << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;

     return 0;
}