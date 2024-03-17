// Dados dois numeros inteiros num e div, faca uma funcao para calcular e retornar o quociente e o resto da divisao inteira de num por div

#include <iostream>

using namespace std;

void divisao(int num, int div, int *q, int *r){
    *q = num/div;
    *r = num%div;
}

int main(){

    int a = 10;
    int b = 2;
    int quoc;
    int resto; 

    int *q = &quoc;
    int *r = &resto;
    divisao(a, b, q, r);

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "q: " << quoc << endl;
    cout << "r: " << resto << endl;


    return 0;
}