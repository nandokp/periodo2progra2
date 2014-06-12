#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;
char cadena[30];

int main()
{
    cout << "ingresar un cadena....:";
    cin.getline(cadena,30);
    //cadena[0]='X';
    cout<<cadena<<"\n";
    for(int i=0;i<strlen(cadena);i++)
    {
        cout<<cadena[i]<<"\n";

    }
    for(int x=0;x<strlen(cadena);x++)
    {
      for (int i=0;i<=x;i++)
    {
     cout<<cadena[i];
    }
     cout<<"\n";
    }


  return 0;
}
