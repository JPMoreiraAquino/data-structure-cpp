#include <iostream>

using namespace std;

struct Veiculo{
    string tipo;
    string cor;
    string placa;
    int anoDeFabricacao;
    int potencia;
    int velocidadeMaxima;
};

int main(){
    Veiculo v1;
    Veiculo v2;
    v1.tipo = "Carro";
    v1.cor = "Vermelho";
    v1.placa = "HXZ - 1234";
    v1.anoDeFabricacao = 2022;
    v1.potencia = 450;
    v1.velocidadeMaxima = 400;

    cout << "Tipo:........: " << v1.tipo << endl;
    cout << "Cor:.........: " << v1.cor << endl;
    cout << "Placa:.......: " << v1.placa << endl;
    cout << "Fabricação:..: " << v1.anoDeFabricacao << endl;
    cout << "Potência:....: " << v1.potencia << endl;
    cout << "Veloxidade:..: " << v1.velocidadeMaxima << endl;

    return 0;
}
