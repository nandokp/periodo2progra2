#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
/*
en un procedimiento ingresar el nombre, las horas y el turno(validar que el turno sea 1,2,3).
luego calcular el pxh,pago de horas, ihss y tp.
usando un procedimiento.
presentar los datos usando otro procedimiento.
*/
char resp;
char nombre[30];
int horas,turno;
double pxh,pb,ihss,tp;

void pedirsino(char &resp)
{ _flushall();
    do
    {
        cout<<"desea continuar S/N...:";
        cin.get(resp);
        _flushall();
    }while((resp!='S') and (resp !='N'));
    cout<<"\n\n";
}

void ingreso(char nombre[], int &horas, int &turno)
{
    cout<<"ingresar su nombre...:";
    cin.getline(nombre,30);
    cout<<"Horas trabajadas...:";
    cin>>horas;
    do
    {
        cout<<"ingresar turno 1,2,3...:";
        cin>>turno;
    }while((turno<1)or (turno>3));
}

void calcular(int horas, int turno, double &pxh,double &pb
              ,double &ihss, double &tp)
              {
switch (turno)
{

case 1:
pxh=100;
 break;

 case 2:
 pxh=130;
default:
pxh=150;
break;
}

pb=pxh *horas;

if (pb>7000)
{
ihss=245;
}
else
{
ihss=0.035 *pb;
}
tp=pb-ihss;
}

void presentar (double pxh, double pb, double ihss, double tp)
{


cout<<"pago por horas..:"<<pxh<<"\n";
cout<<"pago bruto....:"<<pb<<"\n";
cout<<"seguro social...:"<<ihss<<"\n";
cout<<"total a pagar...:"<<tp<<"\n";
}
int main()
{
    do
    {
    ingreso (nombre,horas,turno);
   calcular (horas,turno,pxh,pb,ihss,tp);
   presentar(pxh,pb,ihss,tp);
   pedirsino(resp);
    }while (resp !='N');

}
