#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

static const char alpha[] =
"0123456789"
"!@#$%&*^"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz";
int size = sizeof(alpha) -1;

int main(){

    int tamanho;
    cout << "Digite o tamanho da sua senha: ";
    cin >> tamanho; 

    for (int i=0; i < tamanho; i++){
        cout << alpha[rand() % ::size];
    }

    return 0;
}