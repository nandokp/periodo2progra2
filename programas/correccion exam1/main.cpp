#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

int validarTurno()
{
    int turno;
    do
    {
        cout<<"Ingresar el 1,2,3...:";
        cin>>turno;
    }while((turno<1)or (turno>3));
    return turno;
}

double pxhora(int turno)
{
    switch(turno)
    {
      case 1:
      return 200;
      break;
      case 2:
      return 150;
      break;
      default:
      return 180;
      break;
    }
}
double seguro(double sueldo)
{
    if (sueldo>7000)
        return 245;
    else
        return 0.035*sueldo;
}

void ingresar(char nombre[],int &turno, int &horas)
{

    cout<<"ingresar nombre...:";
    cin.getline(nombre,30);
    cout<<"Horas trabajadas...:";
    cin>>horas;
    turno=validarTurno();
}

void calcular(int turno,int horas,double &pxh,double &pb,double &ihss,double &tp)

{
    pxh=pxhora(turno);
    pb=horas*pxh;
    tp=pb-ihss;
}

void presentar(double pxh,double pb,double ihss,double tp)

{
    cout<<"pago por hora es...:"<<pxh<<"\n";
    cout<<"pago bruto es..:"<<pb<<"\n";
    cout<<"seguro social es..:"<<ihss<<"\n";
    cout<<"total a pagar es..:"<<tp<<"\n";
}

char pedirsino()
{  _flushall();
    char resp;
    do {
        cout<<"desea continuar...:";
        cin.get(resp);
        _flushall();
    }while((resp!='S') and (resp!='N'));
    return resp;
}

int main()
{
    char nombre[30],maxnombre[30],resp;
    int turno,horas;
    double pxh,pb,ihss,tp;
    double maxisueldo;
    maxisueldo=0;

    do
    {
    ingresar(nombre,turno,horas);
    calcular(turno,horas,pxh,pb,ihss,tp);
    presentar(pxh,pb,ihss,tp);
    if (tp>maxisueldo)
    {
        maxisueldo=tp;
        strcpy(maxnombre,nombre);
    }

     resp=pedirsino();

    }while(resp!='N');
cout<<"empleado mayor.....:"<<maxnombre<<"mayor sueldo...."<<maxisueldo<<"\n";

}
