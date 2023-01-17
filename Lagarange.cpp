//wap to find the solution of polynomial using lagrange's interpolation.
#include<iostream>
//#Include<coino.h>
using namespace std;
int main()
{
    float xp,x[10],f[10],prod;
    int i,j;
    float sum=0;
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"Enter the data (x,f(x)):"<<endl;
        cin>>x[i]>>f[i];
    }
    cout<<"Enter the value of xp:";
    cin>>xp;
    for(i=1;i<=n;i++)
    {
        prod=1;
        for(j=1;j<=n;j++)
        {
            if(i!=j)
            {
                prod=prod*((xp-x[j])/(x[i]-x[j]));
            }
        }
        sum=sum+prod*f[i];
    }
    cout<<"solution :"<<sum<<endl;
    //getch();
    return 0;
}
