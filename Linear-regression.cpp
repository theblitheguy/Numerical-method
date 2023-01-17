//wap to find the solution of equation using least square(linear regression )method.
#include<iostream>
//#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    float x[10],y[10],xp;
    int i,n,j;
    float sum=0,p,sumx=0,sumy=0,sumxy=0,sumxz=0,a,b;
    cout<<"Enter the no.of points :";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"Enter the value of x and y :"<<endl;
        cin>>x[i]>>y[i];
    }
    for(i=1;i<=n;i++)
    {
        sumx=sumx+x[i];
        sumy=sumy+y[i];
        sumxy=sumxy+(x[i]+y[i]);
        sumxz=sumxz+(x[i]*x[i]);
    }
    b=(n*sumxy-sumx*sumy)/(n*sumxz-sumx*sumx);
    a=(sumy/n)-((b*sumx)/n);
    cout<<"y="<<a<<"+"<<b<<"x"<<endl;
    //getch();
    return 0;
}
