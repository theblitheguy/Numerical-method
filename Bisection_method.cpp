//wap root of given function using bisection method.
#include<iostream>
#include<iomanip>
#include<math.h>
#define e 0.00001
#define f(x)(x*x*x-4*x+1)

using namespace std;
int main()
{
    float x1,x2,x0;
    do
    {
        cout<<"Enter the value of x1 and x2:"<<endl;;
        cin>>x1>>x2;
    }
    while(f(x1)*f(x2)>0);
    do
    {
        x0=(x1+x2)/2;
        if(f(x1)*f(x2)<0)
        {
            x2=x0;
        }
        else
        {
            x1=x0;
        }
    }
    while(fabs(x2-x1)>e);
    cout<<"The root is :"<<x0<<endl;
    return 0;
}

