#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
int generar()
{
    int num;
    srand(time(0));
    do
    {
    num= 1+ rand() %(300-1);
     }while (num%2 !=0);
     return num;
}
 int sumadigi(int num)
 {
     int csuma=0;
     while(num!=0)
     {
     csuma=csuma+(num%10);
     num=num/10;
     }
     return csuma;
 }

 int nummayor(int num)
 {
     int xmayor=0;
     while (num!=0)
     {
         int digito=num%10;
         num=num/10;
         if (digito>xmayor)
         {
            xmayor=digito;
         }
     }
     return xmayor;
 }


int main()
{
 int num,suma,mayor;
 num=generar();
 suma=sumadigi(num);
 mayor=nummayor(num);
  cout<<"numero...:"<<num<<"\n";
  cout<<"la suma de los digitos es...:"<<suma<<"\n";
  cout<<"el mayor de los digitos es...:"<<mayor<<"\n";
}
