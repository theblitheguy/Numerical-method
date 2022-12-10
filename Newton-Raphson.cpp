//WAP to find root of a given function using newton raphson method
#include<iostream>
#include<math.h>
#define e 0.0001
#define f(x) (3*x-cos(x)-1)
#define g(x) (3+sin(x))
using namespace std;

int main(){
    float x0,x1,err;
    do{
    cout<<"Enter guess:";
    cin>>x0;
    }while (g(x0)==0);

    do{
        x1 = x0 - (f(x0)/g(x0));
        err = fabs(x1-x0);
        x0 =x1;
    }while(err>e);
    cout<<"The root is:"<<x0;
    return 0;
}
