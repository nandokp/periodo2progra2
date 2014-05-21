#include <iostream>

using namespace std;
/*
Ingresar la base y el exponente usando un procedimiento, luego determinar usando una
funcion la potencia y presentar en el main.
*/

void ingresar (int &base, int &expo)
{
    cout<<"Ingresar base: ";
    cin>>base;
    cout<<"Ingresar exponente: ";
    cin>>expo;

}

void calcular(int &potencia, int base, int expo)
{
    for(int c=0; c<=expo; c++)
    {
        expo=base*c;
        potencia=expo;

    }
}

void presentar(int potencia)
{

     cout<<"Potenca :"<<potencia<<"/n";

}

int main()
{
    int base, expo, potencia;
    ingresar(base, expo);
    calcular(potencia, base, expo);
    presentar(potencia);
}
