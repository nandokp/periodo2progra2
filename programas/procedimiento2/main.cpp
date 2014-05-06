#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
/*
ingrear 3 numeros usando un procedimiento, luego determinar el numero mayorusando otro
procedimiento
presentar el mayor en el main
*/
void ingresar(int &num1,int &num2,int &num3)
{
    cout<<"ingresar el numero #1...:";
    cin>>num1;
    cout<<"ingresar el numero #2...:";
    cin>>num2;
    cout<<"ingresar el numero #3...:";
    cin>>num3;
}

void maximo( int num1,int num2,int num3 ,int &mayor)
{
    if((num1>num2) and (num1>num3))
        mayor=num1;
    else if (num2>num3)
        mayor =num2;
    else
        mayor=num3;
}

int main()
{
    int num1,num2,num3,mayor;
    ingresar(num1,num2,num3);
    maximo(num1,num2,num3,mayor);
    cout<<"el numero mayor es...:"<<mayor<<"\n";
}
