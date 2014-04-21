#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
   int numero;
   srand(time(0));
   //cout<<"ingresar un numero entero..:";
   //cin>>numero;
   numero=1 + rand()% (500-1);
   cout<<"numero generado es...:"<<numero<<"\n";

   if ((numero>=1) and (numero<=100))
   {
       cout<<"el numero esta en el rango de 1-100 \n";
   }
   else if ((numero>=101) and (numero<=300))
   {
        cout<<"el numero esta en el rango de 101-300 \n";
   }
    else if ((numero>=301) and (numero<=500))
    {
      cout<<"el numero esta en el rango de 301-500 \n";
    }
    else if (numero>500)
    {
        cout<<"el numero es mayor a 500\n";
    }
    else
    {
        cout<<"el numero es negativo\n";
    }

    system("PAUSE");

}
