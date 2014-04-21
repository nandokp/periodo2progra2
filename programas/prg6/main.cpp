#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{    int num;
    cout << "ingrese un numero...: ";
    cin>>num;
    cout<<"\n";
    if (num > 0)
    {
        cout<<"el numero es positivo"<<"\n";
    }
    else if (num < 0)
    {
        cout<<"el numero es negativo"<<"\n";
    }

    else
    {
        cout<<"el numero es cero"<<"\n";
    }
    cout<<"\n";
    system("PAUSE");

}
