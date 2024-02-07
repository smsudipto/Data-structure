#include<iostream>
using namespace std;
int main()
{
    int A[10],B[10];
    int m,n;
    int i,j,k;
    int sum=0;
    {
        cout<<"enter your m:";
        cin>>m;
        for(i=0; i<m; i++)
        {
            cin>>A[i];
        }

        cout<<"additional array:"<<endl;

        for(i=0; i<m; i++)
        {
            sum +=A[i];
        }
         cout<<sum;
    }


    }

