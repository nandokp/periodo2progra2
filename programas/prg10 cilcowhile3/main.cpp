#include <iostream>
#include <stdlib.h>
#include <limits>
/*
ingresar 5 numeros y presentar al final del ciclo el numero mayor

*/
using namespace std;
int main()
{
   int num,mayor,menor;
   mayor=0;
   menor=1000;
   int c=0;
   while (c<5)
   {
       cout<<"ingrese un numero...:";
       cin>>num;
       if (num>mayor)
       {
           mayor=num;
       }
       else if (num<menor)
       {
           menor=numero;
       }
       {

       }
       c++;
   }
   cout<<"\n";
   cout<<"el numero mayor es...:"<<mayor<<"\n";
   system("PAUSE");

}
