#include <iostream>

using namespace std;

int main()
{
    int somatorio = 0, tamanhoDoVetor = 0;
    double media;
    cout << "Digite Tamanho do vector" << endl;
    cin >> tamanhoDoVetor;
    
    int vector[tamanhoDoVetor];
    
    for(int i=0; i < tamanhoDoVetor; i++) {
        cout << "Digite o valor do vector[" << i << "]: " << endl;
        cin >> vector[i];
    }
    
    for(int i=0; i < tamanhoDoVetor; i++) {
        cout << "valor: " << vector[i] << " " << endl;
        somatorio = somatorio + vector[i];
    }
    
    cout << somatorio << endl;
    
    

    return 0;
}