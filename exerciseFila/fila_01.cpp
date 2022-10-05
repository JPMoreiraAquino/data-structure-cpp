#include <iostream>
//Biblioteca para inserir a fila
#include <queue>

using namespace std;

int main(){
    //Criando a Fila
    queue <string> veiculos;

    //Inserir elementos ma Fila
    veiculos.push("Carro_01");
    veiculos.push("Carro_02");
    veiculos.push("Carro_03");
    veiculos.push("Carro_04");
    veiculos.push("Carro_05");

    cout << "Tamanho da fila: " << veiculos.size() << endl;
    cout << "Primeiro veículo: " << veiculos.front() << endl;
    cout << "Último veículo: " << veiculos.back() << endl;

    while(!veiculos.empty()){
        cout << "Primeiro veículo: " << veiculos.front() << " - " << endl;
        veiculos.pop();
    }
    return 0;
}