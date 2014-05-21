#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
using namespace std;

struct empleado
{
   int turno,horas;
   double sueldo,pxh,pb,ihss,tp,maxisueldo;
   char nombre[30],resp,maxnombre[30];
};
empleado emp;

int validarTurno()
{
    do
    {
        cout<<"Ingresar el 1,2,3...:";
        cin>>emp.turno;
    }while((emp.turno<1)or (emp.turno>3));
    return emp.turno;
}

double pxhora(empleado &emp)
{
    switch(emp.turno)
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

double seguro(empleado &emp)
{
    if (emp.pb>7000)
       return  245;
    else
  return 0.035*emp.pb;
}

void ingresar(empleado &emp)
{

    cout<<"ingresar nombre...:";
    cin.getline(emp.nombre,30);
    cout<<"Horas trabajadas...:";
    cin>>emp.horas;
    emp.turno=validarTurno();
}

void calcular(empleado &emp)

{

    emp.pxh=pxhora(emp);
    emp.pb=emp.horas*emp.pxh;
    emp.ihss=seguro(emp);
    emp.tp=emp.pb-emp.ihss;
}

void presentar(empleado &emp)

{
    cout<<"pago por hora es...:"<<emp.pxh<<"\n";
    cout<<"pago bruto es..:"<<emp.pb<<"\n";
    cout<<"seguro social es..:"<<emp.ihss<<"\n";
    cout<<"total a pagar es..:"<<emp.tp<<"\n";
}

char pedirsino()
{  _flushall();
    emp.resp;
    do {
        cout<<"desea continuar...:";
        cin.get(emp.resp);
        _flushall();
    }while((emp.resp!='S') and (emp.resp!='N'));
    return emp.resp;
}


int main()
{
    emp.maxisueldo=0;

    do
    {
    ingresar(emp);
    calcular(emp);
    presentar(emp);
    if (emp.tp>emp.maxisueldo)
    {
        emp.maxisueldo=emp.tp;
        strcpy(emp.maxnombre,emp.nombre);
    }

     emp.resp=pedirsino();

    }while(emp.resp!='N');
cout<<"empleado mayor.....:"<<emp.maxnombre<<"\n"<<"mayor sueldo...."<<emp.maxisueldo<<"\n";
}
