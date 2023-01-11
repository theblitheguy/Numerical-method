/*Finding the eigen value and eigen vector using power method. This is an iterative method so
we need initial guess*/
#include<iostream>
#include<math.h>
#define e 0.001
using namespace std;

int main(){
    float mat[5][5], x[5],y[5], k_old=0.00, k_new, error;
    int n;
    
    cout<<"Enter order of matrix: ";cin>>n;
    cout<<"Enter elements of matrix: "<<endl;
    for(int i=1; i<=n; i++){        //Reading 3*3 matrix 
        for(int j=1; j<=n; j++){
            cout<<"A"<<i<<j<<":";cin>>mat[i][j];
        }
    }
    cout<<"Enter initial guess:"<<endl;
    for(int i=1; i<=n; i++){        //Reading initial guess
        cout<<"X"<<i<<":"; cin>>x[i];
    }
   
    do{
        for(int i=1; i<=n;i++){
            y[i]=0;
            for(int j=1; j<=n;j++){
                y[i] += mat[i][j]*x[j];
            }
        }
        k_new = fabs(y[1]);
        for(int i=2; i<=n; i++){
            if(fabs(y[i])> k_new)
            k_new = fabs(y[i]);
        }

        error = k_new - k_old;

        for(int i=1; i<=n; i++){
            x[i] = y[i]/k_new;
        }
        k_old = k_new;
    }while(error > e);

    cout<<endl;
    cout<<"Eigen value is: "<<k_new<<endl;
    cout<<"Eigen vector: "<<endl;
    for(int i=1; i<=n; i++)
    cout<<x[i]<<endl;

    return 0;
}
