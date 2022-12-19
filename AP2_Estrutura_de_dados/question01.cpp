#include <iostream>

using namespace std;

int primo(int numero)
{
    int i = 0;
    int p = 1;

    for (i = 2; i < numero; i++)
    {
        if (numero % i == 0)
        {
            p = 0;
        }
    }
    return p;
}

int main()
{
    int Num, Resultado;
    printf("Digite um numero:");
    scanf("%d", &Num);

    Resultado = Primo(Num);

    // printf("%d\n",Resultado);

    if (Resultado == 1)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }

    getchar();
    return 0;
}