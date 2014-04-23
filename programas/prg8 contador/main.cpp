#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
   int num,par=0,impar=0,sumap=0,sumai=0;
   double promp,promi;
   int c=0;
   while (c<5)
   {
       cout<<"ingrese un numero...:";
       cin>>num;
       if (num%2==0)
       {
           par++;
           sumap+=num;
       }

       else

       {
           impar++;
           sumai+=num;
       }
            c++;
   }

   promp= sumap/par;
   promi= sumai/impar;
      cout<<"los numeros pares son..:"<<par<<"\n";
      cout<<"el promedio de pares es..:"<<promp<<"\n";
      cout<<"los numeros impares son..:"<<impar<<"\n";
      cout<<"el promedio de impares es..:"<<promi<<"\n";
      system("PAUSE");
}
