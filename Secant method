//Finding the root of given function using Secant method
#include<iostream>
#include<math.h>
#define e 0.0001
#define f(x) 3*x - cos(x) -1
using namespace std;

int main(){
    float x1, x2, x3;
    cout<<"Enter value for x1 and x2: "; cin>>x1>>x2;
    do{
        x3 = ((x1*f(x2))-x2*(f(x1)))/(f(x2)-f(x1));
        x1=x2;
        x2=x3;
    }while (fabs((x2-x1)/x2)<e);

    cout<<"The root is :"<<x3;
    return 0;
}
