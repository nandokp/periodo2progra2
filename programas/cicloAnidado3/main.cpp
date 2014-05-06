#include <iostream>
#include  <stdlib.h>
#include <stdio.h>
using namespace std;
/*
 ingresar un numero entero, luego preguntar si desea continuar.
 al final presentar cuantos fueron impares.
*/
int main()

{
int num;
   char resp;
   int ci=0;
   int cp=0;
   do
   {
      cout<<"ingresar un nuemro..:";
 cin>>num;
 if (num%2==0)
     {
     cp++;
     }
   else
    {
        ci++;
    }
   do
   {
       cout<<"desea continuar S/N..:";
       cin.get(resp);
       _flushall();
   }while((resp !='S') and (resp !='N'));


   }while ((resp !='N'));
   cout<<"contador de pares..:"<<cp<<"\n";
   cout<<"contador de impares..:"<<ci<<"\n";

}
