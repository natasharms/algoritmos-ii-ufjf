#include <iostream>

using namespace std;

void troca (int *a, int *b){

    int aux = 0;
    aux = *a;
    *a = *b;
    *b = aux;
}

int main(){

    int a = 2;
    int b = 4;

    int *ptA = &a;
    int *ptB = &b;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    troca(ptA, ptB);

    cout << "\na: " << a << endl;
    cout << "b:" << b << endl;

    return 0;
}