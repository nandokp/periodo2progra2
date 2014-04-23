#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int num,suma;
    int c=0;
    suma=0;
    int mayor50=0, suma50=0;
    while (c<5)
    {
        cout<<"ingresar un numero..:";
        cin>>num;
        if (num>50)
        {
            mayor50++;
            suma50=suma50 + num;
        }
        c++;//c=c+1  estamos contanto
        //las veces que se repite el ciclo
        suma= suma + num;// suma+=num;
        // sumando los numeros ingresados
    }
     cout<<"la suma de los numeros mayores que 50 es...:"<<suma50<<"\n";
    cout<<"los numeros mayores a 50 son...:"<<mayor50<<"\n";
    cout<<"la suma de los numeros ingresados es...:"<<suma<<"\n";
    cout<"\n";
    system("PAUSE");
}
