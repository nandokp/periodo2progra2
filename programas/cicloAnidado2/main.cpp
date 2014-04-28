#include <iostream>
/*
 generar un numero que este entre 50-100
 hacerlo 5 veces
*/
using namespace std;

int main()
{
    int num;
    for (int i=0;i<5;i++)
    {
        cout<<"ingresar numero entre 50-100...:";
        cin>>num;
        while (!((num>=5) and (num<=100)))
        {
          cout<<"ingresar numero entre 50-100...:";
        cin>>num;
        }
    }
}
