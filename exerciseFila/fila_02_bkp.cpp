#include <iostream>
#include <queue>

using namespace std;

int main(){

    //Criando a fila
    queue<int> fila_01, fila_02;
    
    //Inserindo elementos na fila
    fila_02.push(10);
    fila_02.push(20);
    fila_02.push(30);
    fila_02.push(40);
    fila_02.push(50);
    fila_02.emplace(60); //C++11
    fila_02.emplace(70);

    //Trocando o conteúdo de fila_02 para fila_01
    fila_02.swap(fila_01);
    cout << "Tamanho da fila: " << fila_02.size() << endl;
    //Imprimindo primeiro elemento da fila
    cout << "Primeiro elemento: " << fila_01.front() << endl;
    //Imprmir o tamanho da fila
    cout << "Tamanho da fila: " << fila_01.size() << endl;
    //Imprindo o último elemento
    cout << "Último elemento: " << fila_01.back() << endl;

    //Imprindo os elementos da fila enquanto ela não for vazia
    while(!fila_01.empty()){
        cout << fila_01.front() << " - ";
        fila_01.pop();
    }
    //Verificando se a fila contém elementos ou não
    if(fila_01.empty()){
        cout << "Fila Vazia" << endl;
    }else{
        cout << "Tamanho: " << fila_01.size() << endl;
    }
    return 0;
}