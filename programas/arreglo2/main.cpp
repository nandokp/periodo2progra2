#include <iostream>

using namespace std;
/* Ingresar 50 numeros a un arreglo de enteros,
luego elaborar una funcion para devolver el numero
mayor,una funcion para devolver el numero de pares
que hay en el arreglo

*/
const int tam=4;
    int numero[tam];
void ingresar(int numero[])
{
    for (int i=0;i<=tam;i++)
    {
        cout<<"Ingresar el numero["<<i<<"]....:";
        cin>>numero[i];
    }
}

int mayor(int numero[])
{
    int maxi=0;
    for (int i=0;i<=tam;i++)
    {
       if(numero[i]>maxi)
        maxi=numero[i];
    }
    return maxi;
}

int pares(int numero[])
{
    int xpar=0;
    for (int i=0;i<=tam;i++)
    {
    if (numero[i]%2==0)
        xpar++;
    }
    return xpar;
}
int menor(int numero[])
{
    int xmenor=1000000000;
    for (int i=0;i<=tam;i++)
    {
    if ( numero[i]<xmenor)
       xmenor=numero[i];
    }
    return xmenor;

}

int main()
{
    int xmax=0;
    int cpar=0;
    int cimpar=0;
ingresar(numero);
xmax=mayor(numero);
cout<<"el numero mayor es..:"<<xmax<<"\n";
cpar=pares(numero);
cout<<"Numero pares es...:"<<cpar<<"\n";
cimpar=menor(numero);
cout<<"el numero menor es..:"<<cimpar<<"\n";
}
