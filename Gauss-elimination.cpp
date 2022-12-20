#include<iostream>
#include<math.h>
#include<conio.h>
#define n 3
using namespace std;
int main()
{
    int i,j,k;
    float x[10],s[10][10],d,sum;
    cout<<"Enter the cofficients :"<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<(n+1);j++)
        {
            cout<<"s"<<"["<<i<<"]"<<"["<<j<<"]"<<"=";
            cin>>s[i][j];
        }
        cout<<endl;
    }
    for(j=1;j<=n;j++)
    {
        for(j=1;j<=n;j++)
        {
            if(i>j)
            {
                d=s[i][j]/s[j][j];
                for(k=1;k<=(n+1);k++)
                {
                    s[i][k]=s[i][k]-(d*s[j][k]);
                }
            }
        }
    }
        x[n]=s[n][n+1]/s[n][n];
        for(i=n-1;i>=1;i--)
        {
            sum=0;
            for(j=i+1;j<=n;j++)
            {
                sum=sum+s[i][j]*x[j];
            }
            x[i]=(s[i][n+1]-sum)/s[i][j];
        }
        cout<<"The result is:"<<endl;
        for(i=1;i<=n;i++)
        {
            cout<<x[i]<<" ";
        }
        getch();
        return 0;
    }
