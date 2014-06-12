#include <stdlib.h>
#include <iostream>
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

int contar(char nombre[])
{    int c=1;
    for(int k=0;k<=strlen(nombre);k++)
    {
            switch (nombre[k])
            {
            case ' ':
                c++;
                break;
            default:
                break;
            }
        }
        return c;
}

void contpalabras(char nombre[t][30])
{
    int conta=0;
    for (int i=0;i<=t;i++)
{
  conta=contar(nombre[i]);
  cout<<nombre[i]<<"  Tiene  "<<conta<<" letras"<<"\n";
}

}

int main()
{
    ingresarCadenas(nombre);
    contpalabras(nombre);


}
