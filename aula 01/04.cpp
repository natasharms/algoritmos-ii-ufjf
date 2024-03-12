// Faça uma funcão que, dados uma string str e um caractere ch, procure e retorne a posicão da primeira ocorrência de ch na string str. Se ch nao for encontrada em str, retornar o valor −1.
#include <iostream>
#include <string>

using namespace std;

int procuraCharNaString(string str, char ch){

    for(int i = 0; i < str.size(); i++ ){
        if(ch == str[i]){
            return i+1;
        }
    }

    return -1;
}

int main()
{
    string str;
    char ch;

    cout << "Digite uma string: ";
    cin >> str;
    cout << "Digite um caractere: ";
    cin >> ch;

    int posicaoCh = procuraCharNaString(str, ch);

    cout << posicaoCh << endl;

    return 0;
}