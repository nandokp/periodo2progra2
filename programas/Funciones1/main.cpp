#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int notafinal(int na, int ne)
{   int nf;
    nf= na+ne;
    return nf;
}

void ingreso(char nombre[],int &na, int &ne)
{
    cout<<"Ingresar nombre: ";
    cin.getline(nombre,30);
    cout<<"Ingreasr nota Aumulada: ";
    cin>>na;
    cout<<"Ingreasr nota Examen: ";
    cin>>ne;
}

int main()
{
    char nombre [30];
    int na, ne, nf;
    ingreso(nombre,na,ne);
    nf=notafinal(na,ne);
    cout<<"Nota final es: "<<nf<<"\n";
}
