#include <iostream>

using namespace std;

/*
ingresar un numero 1-10 y presentrar la tabla de multiplicar de 1 a 10
hacerlo 5 veces
*/

int main()
{
    int num,tabla;

    for( int i=0; i<5;i++)
    {

        do//solo validar
        {
           cout << "ingrese un numero entre 1-10...:";
           cin>>num;

        }while(!((num>=1) and (num<=10)));

      for(int k=1;k<=10;k++)//
          tabla=num*k;
          cout<<k<<"X"<<num<<"="<<tabla<<"\n";
      }
      cout<<"\n\n";
    }

    }



