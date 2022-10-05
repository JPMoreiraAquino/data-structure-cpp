#include <iostream>
#include <stack>

using namespace std;

int main()
{
  stack<string> veiculos;
  if (veiculos.empty())
  {
    cout << "Pilha vazia" << endl;
  }
  else
  {
    cout << "Pilha com elementos";
  }
  veiculos.push("Carro_01");
  veiculos.push("Carro_02");
  veiculos.push("Carro_03");
  veiculos.push("Carro_04");

  if (veiculos.empty())
  {
    cout << "Pilha vazia" << endl;
  }
  else
  {
    cout << "Pilha com elementos" << endl;
  }
  cout << "Tamanho da pilha: " << veiculos.size() << endl;
  // Imprimindo o veículo do topo
  cout << "Veículo do topo: " << veiculos.top() << endl;
  // Retirar um elemento da pilha
  veiculos.pop();
  cout << "Tamanho da pilha: " << veiculos.size() << endl;
  cout << "Veiculo do topo: " << veiculos.top() << endl;

  // Imprimindo os elementos da pilha enquanto a pilha não estiver vazia
  while (!veiculos.empty())
  {
    cout << veiculos.top() << " - " << endl;
    veiculos.pop();
  }
  return 0;
}