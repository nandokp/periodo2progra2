#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
/*
determinar si un numero es par o impar
*/
int main()
{ int numero, numero2;
    cout << "numero...:";
    cin>>numero;
numero2= 1 + rand() % (1000-1);
    if (numero % 2==0)
    {
        cout<<"EL NUNNERO ES PAR\n";
    }
    else
    {
        cout<<"EL NUMERO ES IMPAR\n";
    }

    if ((numero2 % 5 ==0) and (numero2 % 2 ==0))
    {
        cout<<"EL NUMERO2 ES"<<numero2<<"es divisible entre 2 y 5"<<"\n";
    }
    else
    {
        cout<<"EL NUMERO2 ES..:"<<numero2<<"\n"<<"no es divisible entre 2 y 5"<<"\n";
    }
    cout<<"\n";
    system("PAUSE");
}
