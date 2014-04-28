#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
/*
generar 10 numeros pares, y validar que
el numero sea par un ciclo while y un for
para contar que sea 10 numeros.
*/
int main()
{
    srand(time(0));
    int num,mayor;
    mayor=0;
    for (int i=0;i<10;i++)

    {
        num = 1 +rand()%(200-1);
        cout<<"Numero generado es..:"<<num<<"\n";
         while(num% 2 !=0)
         {
             num=1+rand()%(200-1);
         }
         cout<<"Numero generado es..:"<<num<<"\n";

          if(mayor<num);
    {
       mayor=num;
    }
    cout<<"El Numero es mayor..."<<mayor<<"\n";

    }



    system("PAUSE");
}
