#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;
  const int n=9;
 int num[n];
 int xnum[n];
void ingresar()
{
   srand(time(0));
    for (int i=0;i<=n;i++)
    {
       num[i]=1 + rand()%(100-1);
       xnum[i]=1 + rand()%(100-1);
    }
}

void ordenar(int num[],int xnum[])
{
 int temp;
for(int i=0;i<n;i++)
for(int j=0;j<n-1;j++)
    if(num[j]<num[j+1])
    {
    temp=num[j];
    num[j]=num[j+1];
    num[j+1]=temp;
    }
    int T;
    for(int k=0;k<n;k++)
    for(int x=0;x<n-1;x++)
    if(xnum[x]>xnum[x+1])
    {
    T=xnum[x];
    xnum[x]=xnum[x+1];
    xnum[x+1]=T;
    }
}

void presentar(int num[],int xnum[])
{
     cout<<"Desendente"<<"\n";
    for (int i=0;i<n;i++)
{
cout<<i<<"...."<<num[i]<<"\n";
}

cout<<"Asendente"<<"\n";
    for (int k=0;k<n;k++)
{
cout<<k<<"...."<<xnum[k]<<"\n";
}

}


int main()
{
ingresar();
ordenar(num,xnum);
presentar(num,xnum);

}
