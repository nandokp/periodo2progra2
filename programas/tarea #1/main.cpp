#include <iostream>
#include <stdlib.h>

using namespace std;

 int main()
{
      int m, d, a;
    cout << "Ingrese el mes...:";
    cin>> m;
    cout<<"Ingrese el dia...:";
    cin>>d;
    cout<<"Ingrese el anio...:";
    cin>>a;
    if ((m==1 or m==3 or m==5 or m==7 or m==8 or m==10 or m==12) and (d<=31) and (a>0))
    {
        cout<<"la fecha esta correcta"<<"\n";
    }
    else if ((m==2) and (d<=28) and (a>0))
    {
      cout<<"la fecha esta correcta"<<"\n";
    }

    else if ((m==4 or m==6 or m==9 or m==11) and (d<=30) and (a>0))
    {
        cout<<"la fecha esta correcta"<<"\n";
    }
    else
    {
        cout<<"la fecha esta incorrecta"<<"\n";
    }

    system("PAUSE");
}
