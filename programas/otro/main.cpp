#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int mes,dia,a�o;
    cout << "Ingrese el mes...:";
    cin>> mes;
    cout<<"Ingrese el dia...";
    cin>>dia;
    cout<<"Ingrese el a�o";
    cin>>a�o;
    if (mes==1 or mes==3 or mes==5 or mes==7 or mes==8 or mes==10 or mes==12) and (dia<=31) and (a�o>0)
    {
        cout<<"la fecha esta correcta";
    }
    else if (mes==2) and (dia<=28) and (a�o>0)
    {
      cout<<"la fecha esta correcta";
    }

    else if (mes==4 or mes==6 or mes==9 or mes==11) and (dia<=30) and (a�o>0)
    {
        cout<<"la fecha esta correcta";
    }
    else
    {
        cout<<"la fecha esta incorrecta";
    }

    system("PAUSE");
}
