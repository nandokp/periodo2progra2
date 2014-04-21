#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
/*
generar un numero random entre 1-350 y
determinar elrango en el que se encuentra
1-50
51-120
120-200
201-
*/
int main()
{
    int num;
    srand(time(0));
    num=1+rand() %(350-1);
    cout<<"numero generado es "<<num<<"\n";

    if ((num>=1) and (num<=50))
    {
        cout<<"el numero se encuentra entre 1-50";
    }
    else if((num>=51)and (num<=120))
    {
        cout<<"el numero se encuentra entre 51-120";
    }
    else if ((num>=121)and (num<=200))
    {
        cout<<"el numero se encuentra entre 121-200";
    }
    else
   {
       cout<<"el numero es mayor 200";
   }
   cout<<"\n";
   system("PAUSE");
}
