//wap to find matrix of[1  2  3  6]
//                       [2  3  5 10]
//                      [2 -1  3  4]
#include<iostream>
#include<conio.h>
#define n 3
using namespace std;
int main()
{
    int i,j,k;
    float s[3][4];
    float pivot,fact;
    cout<<"Enter the values :"<<endl;
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<"s"<<"["<<i<<"]"<<"["<<j<<"]"<<"::";
            cin>>s[i][j];
        }
        cout<<endl;
    }
    for (k=0;k<n;k++)
    {
        pivot=s[k][k];
        for(j=0;j<4;j++)
        {
            s[k][j]=s[k][j]/pivot;
        }
        for(i=0;i<n;i++)
        {
            fact=s[i][k];
            if(i!=k)
            {
                for(j=0;j<4;j++)
                {
                    s[i][j]=s[i][j]-(fact*s[k][j]);
                }
            }
        }
    }
    cout<<"The result is:"<<endl;
    for(i=0;i<3;i++)
    {
        cout<<s[i][3]<<endl;
    }
   getch();
   return 0;
}
