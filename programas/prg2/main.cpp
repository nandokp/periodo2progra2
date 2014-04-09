#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{   int notaa,notae,notaf;
    char nombre[30];
    cout<<"Nombre del  alumno...:";
    cin.getline(nombre,30);

    cout << "ingresar la nota Acumulada...:";
    cin>>notaa;

    cout<<"ingresar la nota examen...:";
    cin>>notae;

    notaf= notaa + notae;
    cout<<"\n";
    if (notaf>=60)
{
    cout<<"El alumno esta APROBADO"<<"\n";
}
else
{
    cout<<"El alumno esta REPROBADO"<<"\n";
}
    cout<<"\n";
    cout<<nombre<<"\n"<<" Su nota final es "<<notaf;
    cout<<"\n";
    system("PAUSE");
    return 0;
}

