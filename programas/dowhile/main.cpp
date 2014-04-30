#include <iostream>

using namespace std;

int main()
{
     int num;
    for (int i=0;i<5;i++)
    {
        do
        {
          cout<<"ingresar numero entre 50-100...:";
        cin>>num;
        }while (!((num>=50) and (num<=100)));

    }
}
