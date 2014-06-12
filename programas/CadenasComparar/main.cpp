#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//comparacion de cadenas
using namespace std;
const int  t=4;
char nombre[t][30];
void ingresarCadenas(char nombre[t][30])
{ for (int i=0;i<=t;i++)
{
  cout<<"ingresar el nombre...:";
  cin.getline(nombre[i],30);
}
}

void comparar2(char nombre[t][30])
{
    char cadcompa[30];
    cout<<"ingresar cadena a compara...:";
    cin.getline(cadcompa,30);
    for(int i=0;i<=t;i++)
    {
        if (strcmp(nombre[i],cadcompa)==0)
        {
            cout<<"Comparacion correcta con  "<<nombre[i]<<"\n";
        }
    }
}

void comparar(char nombre[t][30])
{

     char cadcompa[30];
    cout<<"ingresar cadena a compara...:";
    cin.getline(cadcompa,30);
    for(int i=0;i<=t;i++)
    {
        if (strncasecmp(nombre[i],cadcompa,strlen(cadcompa))==0)
        {
            cout<<"Comparacion correcta con  "<<nombre[i]<<"\n";
        }
    }

}


int main()
{
    ingresarCadenas(nombre);
    comparar2(nombre);
    cout<<"otro tipo de comparacion"<<"\n";
    comparar(nombre);

}
