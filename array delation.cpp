#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[5];
    int i,n;
    int position;
    cout<<"enter your n:";
    cin>>n;
    cout<<"enter your rlement:"<<endl;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

    cout<<"enter your position:";
    cin>>position;
    if(position>=n+1)
    {
        cout<<"data is not found.";
    }
    else
    {

        for(i=position-1;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
        for(i=0;i<n-1;i++)
         {
             cout<<"array is:"<<a[i]<<endl;
         }
    }
    getch();
}
