// Faça uma funcão que receba um numero inteiro n > 0 e determine se este e um numero primo. A função deve retornar um valor booleano: true ou false. 

#include <iostream>

using namespace std;

bool ehPrimo(int n){
    if (n <= 1) {
        return false;
    }

    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }

    return true;
}

int main()
{
    int n;
    cout << "Digite um numero inteiro maior que 0: " << endl;
    cin >> n;

    bool primo = ehPrimo(n);
    cout << boolalpha << primo << endl;

    return 0;
}