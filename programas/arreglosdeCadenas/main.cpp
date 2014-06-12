#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;
const int  t=4;
char cadena[t][30];

void ingresar(char cadena[t][30])
{ for (int i=0;i<=t;i++)
{
  cout<<"ingresar la cadena de 30 letras MAX...:";
  cin.getline(cadena[i],30);
}

}
void cambiar(char cadena[])
{
    for(int i=0;i<strlen(cadena);i++)
    {
        switch (cadena[i])
        {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'o':
        case 'O':
        case 'i':
        case 'I':
        case 'u':
        case 'U':
            cadena[i]='X';
            break;
        default:
            break;
        }
    }
}

void cambioArreglo(char cadena[t][30])
{
    for(int i=0;i<=t;i++)
    {
        cambiar(cadena[i]);
    }
}

void presentar(char cadena[t][30])
{
    for(int i=0;i<=t;i++)
    {
        cout<<"cadena :"<<i<<"...:"<<cadena[i]<<"\n";
    }
}
int main()
{
 ingresar(cadena);
 cambioArreglo(cadena);
 presentar(cadena);
}
