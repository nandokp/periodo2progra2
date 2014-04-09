#include <iostream>
#include <stdlib.h>
using namespace std;
/*




*/
int main()
{
    char nombre[30];
    int horas, pagoxhora, pbruto,ihss, tp;
    int turno;
    int bono;

    cout<<"Ingresar nombre del empleado...:";
    cin.getline(nombre,30);

    cout<<"Horas trabajadas...:";
    cin>>horas;

    cout<<"Turno de trabajo...:";
    cin>>turno;

    if (turno==1)
    {
        pagoxhora=200;
    }

     else if (turno==2)
     {
         pagoxhora=300;
     }
     else if( turno==3)
     {
         pagoxhora=370;
     }
     else
     {
         pagoxhora=0;
     }
     if ((turno==1) or (turno==3))
     {
         bono=400;
     }
     else
     {
         bono=0;
     }
     pbruto=(pagoxhora*horas) + bono;

     if (pbruto>7000)
     {
         ihss=245;
     }
     else
     {
         ihss=0.035 * pbruto;
     }
     tp= pbruto - ihss;
     cout<<"pago por hora...:"<<pagoxhora<<"\n";
     cout<<"bono ganado es ...:"<<bono<<"\n";
     cout<<"pago antes de deduccion...:"<<pbruto<<"\n";
     cout<<"Seguro Social...:"<<ihss<<"\n";
     cout<<"total a pagar...:"<<tp<<"\n";
     system("PAUSE");
}
