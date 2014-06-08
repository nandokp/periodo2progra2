#include <iostream>

using namespace std;
/*
Ingresar numeros enteros positivos a una matriz de
5 columnas por 6 lineas, dejando la ultima lineas
reservada para la suma de las columnas.
*/

const int lin=5;
const int col=4;
int num[lin][col];

void ingreso (int num[lin][col])
{
    for (int l=0;l<=lin;l++)
    {
        for(int c=0;c<=col-1;c++)
        {
            cout<<"Numero["<<l<<","<<c<<"]...:";
            cin>>num[l][c];
        }
    }
}

void sumar(int num[lin][col])
{
    for(int c=0;c<=col;c++)
    {   num[lin][c]=0;
        for(int l=0;l<=lin-1;l++)
        {
           num[lin][c]+=num[l][c];
        }

    }

}

void mayor(int num[lin][col])
{
     for(int l=0;l<=lin;l++)
    {   num[l][col]=0;
        for(int c=0;c<=col-1;c++)

        {
           if (num[l][c]>num[l][col])
           num[l][col]=num[l][c];
C:\Users\Manuel\Desktop\arreglosbidi2\main.cpp        }

    }


}


void presentar(int num[lin][col])
{
for(int l=0;l<=lin;l++)
    {
        for(int c=0;c<=col;c++)

        {
            cout<<num[l][c]<<"  ";

        }
        cout<<"\n";
    }

}
int main()
{
    ingreso(num);
    mayor (num);
    presentar(num);
}
