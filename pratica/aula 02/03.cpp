#include <iostream>

using namespace std;

int main(){

    int x = 23;
    float y = 9.7;

// Declare e inicialize um ponteiro pt1 com o endereco de x
    int *pt1 = &x;

// Incremente o valor de x de forma indireta
    (*pt1)++;
    cout << "x: " << x << endl;

// Declare um segundo ponteiro (pt2) e faca-o apontar para y.
    float *pt2 = &y;
    cout << "\npt2: " << *pt2 << endl;
    cout << "y: " << y << endl;

// Imprima a soma dos valores de x e y, sem usar as variaveis x e y.
    cout << "\nsoma: " << *pt1 + *pt2 << endl;

// Imprima o endereco da posicao de memoria localizada 16 bytes apos o endereco de x

    cout << "\nendereco de x: " << pt1 << endl;
    cout << "endereco de x + 16: " << pt1 + 4 << endl; // cada int ocupa 16 bytes

// Declare um terceiro ponteiro (pt3) e faca-o apontar para o ponteiro de y.
    float **pt3 = &pt2; // ** declara um ponteiro para um ponteiro
    cout << "\npt2: " << pt2 << endl;

// Usando pt3, mova pt2 para a proxima posicao de memoria 
    (*pt3)++;
    cout << "pt2: " << pt2 << endl;

// Usando apenas pt3, imprima os enderecos de pt3 e pt2.
    cout << "\n&pt2: " << &pt2 << endl;
    cout << "&pt3: " << &pt3 << endl;
    cout << "\n*pt2: " << *pt2 << endl;
    cout << "*pt3: " << *pt3 << endl;
    cout << "\npt2: " << pt2 << endl;
    cout << "pt3: " << pt3 << endl;

    return 0;
}