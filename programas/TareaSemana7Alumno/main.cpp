#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct alumno
{
    char nombre[30];
    int na,ne,nf;
    char obs[15]; //observación de aprobado o reprobado

};

const int n=2;
alumno alum[n];
alumno maxalumn;


void ingreso(alumno alum[])
{
    for (int i=0;i<=n;i++)
    {   _flushall();
        cout<<"Ingresar el nombre del alumno..:";
        cin.getline(alum[i].nombre,30);
        cout<<"Ingresar la nota Examen ..:";
        cin>>alum[i].ne;
        cout<<"Ingresar la nota Acumulada..:";
        cin>>alum[i].na;

    }

}

void calcular (alumno alum[])
{
    for (int i=0;i<=n;i++)
    {
        alum[i].nf= alum[i].na + alum[i].ne;
        if (alum[i].nf>=60)
        {
            strcpy(alum[i].obs,"Aprobado");
        }
        else
        {
            strcpy(alum[i].obs,"Reprobado");
        }
    }
}
void ordenarNota(alumno alum[])
{
     for (int i=0;i<=n;i++)
    {
    alum[i].nf= alum[i].na + alum[i].ne;

    int temp;
    for(int k=0;k<n;k++)
    for(int x=0;x<n-1;x++)
    if(alum[x].nf<alum[x+1].nf)
    {
    temp=alum[x].nf;
    alum[x].nf=alum[x+1].nf;
    alum[x+1].nf=temp;
    }
    }
}
void presentar1( alumno alum)
{
    cout<<"Alumno "<<alum.nombre;
    cout<<" nota Final es "<<alum.nf;
    cout<<" esta "<<alum.obs<<"\n";
}

void presentar2 (alumno alum[])
{
    for (int i=0;i<=n;i++)
    {
    alum[i].nf= alum[i].na + alum[i].ne;
    cout<<"Alumno "<<alum[i].nombre;
    cout<<" nota Final es "<<alum[i].nf;
    cout<<" esta "<<alum[i].obs<<"\n";
    }
}

alumno mayoralum (alumno alum[])
{   alumno temp;
    temp= alum[0];
    for (int i=0;i<=n;i++)
    {
        if (temp.nf<alum[i].nf)
        {
            temp= alum[i];
        }
    }
    return temp;
}

int main()
{
    ingreso(alum);
    calcular(alum);
    ordenarNota(alum);
    presentar2(alum);
    maxalumn = mayoralum(alum);
    cout<<"******** Mayor **********";
    presentar1(maxalumn);
}
