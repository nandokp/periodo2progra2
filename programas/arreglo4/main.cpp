#include <iostream>
#include <stdlib.h>
#include <time.h>

const int tam=9;
int numero[tam];
int cifras[tam];
using namespace std;

void ingreso(int numero[])
{   srand(time(0));
    for (int i=0;i<=tam;i++)
    {
        numero[i]=1+rand()%(100-1);
    }
}

void presentar(int numero[],int fact[])
{
    for (int i=1;i<=tam;i++)
    {
     cout<<"Factorial de "<<numero[i]<<" es "<<cifras[i]<<"\n";
    }
}
int contarcifras(int numero)
 {
     int ccf=1;
     while(numero>10)
     {
         numero=numero/10;
    ccf++;
     }
     return ccf;
 }


void calcular(int numer[],int cifras[])
{
    for (int i=0;i<=tam;i++)
    {
        cifras[i]=contarcifras(numero[i]);
    }
}

void pres_revez(int numero[])
{
    int xnum=0;
    int xnum2;
    for (int i=0;i<=tam;i++)
    {
        cout<<"Numero    "<<numero[i]<<"    tiene    ";
        xnum2=numero[i];
        while (xnum2>=10)
        {
            xnum=xnum2%10;
            xnum2=xnum2/10;
            cout<<xnum;
        }
        cout<<xnum2<<"   cifras\n";
    }
}

int main()
{
ingreso(numero);
calcular(numero,cifras);
presentar(numero,cifras);
cout<<"\n\n\n";
pres_revez(numero);
}
