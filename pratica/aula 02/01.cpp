#include <iostream>

using namespace std;

int main(){

    // Declare um ponteiro para inteiro pt;
    int *pt; 

    // Imprima o endereço de pt;
    cout << "Endereco de pt: " << &pt << endl; 

    // Crie uma variável inteira x;
    int x; 

    // Leia um valor para x;
    cout << "Digite um valor pra x: ";
    cin >> x;

    // Faça com que pt aponte para x.
    pt = &x;

    // Imprima o conteúdo da váriavel pt;
    cout << "pt: " << pt << endl; 
    cout << "*pt: " << *pt << endl;
    cout << "&pt: " << &pt << endl; 

    // Imprima o endereço de x;
    cout << "Endereco de x: " << &x << endl; 

    // Usando o ponteiro pt multiplique x por 10 e altere seu valor;
    *pt *= 10;

    // Imprima o conteúdo apontado por pt;
    cout << "Conteudo apontado por pt: " << *pt << endl; 

    // Some 10 a variável pt;
    pt += 10;

    // Imprima o conteúdo da variável pt;
    cout << "pt: " << pt << endl; 
    cout << "*pt: " << *pt << endl; 
    cout << "&pt: " << &pt << endl; 

    return 0;
}