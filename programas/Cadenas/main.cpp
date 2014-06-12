#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;
//Ingresar una cadena de 30 letras, luego usando un procedimiento
//cambiar las vocales de la cadena por una "x".

void ingresar(char cadena[])
{
    cout<<"ingresar la cadena...:";
    cin.getline(cadena,30);
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

int main()
{
 char cadena[30];
 ingresar(cadena);
 cambiar(cadena);
 cout<<"cadena cambiada  "<<cadena<<"\n";
}
