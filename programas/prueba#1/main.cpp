#include <iostream>
#include <stdlib.h>
#include <time.h>
/*
generar 10 numeros aleatorios de 1-100 y contar los numeros que son
divisibles entre 5 y obtener su promedio.
obtener el promedio de todos los numeros ingresados y presentar la suma.

*/

using namespace std;

int main()
{
    int num, disivible5=0,c=0,prom5,promT,suma5=0,sumaT=0;
    srand(time(0));
    while (c<10)
    {
    num=1+rand() %(100-1);
    cout<<"numero generado es...:"<<num<<"\n";
    if (num%5==0)
    {
         disivible5++;
         suma5+=num;
    }
    else if (disivible5>0)
    {
     prom5=(suma5/disivible5);
    }
    sumaT+=num;
     c++;
    }
    promT=(sumaT/c);
   cout<<"el promedio de los numeros divisibles entre 5 es...:"<<prom5<<"\n";
   cout<<"el promedio de los numeros ingresados es...:"<<promT<<"\n";
   cout<<"la suma de los numeros ingresados es...:"<<sumaT<<"\n";

}
