#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[5];
    int i,n;
    int data;
    int position=-1;
    cout<<"enter your n:";
    cin>>n;
    cout<<"enter your rlement:"<<endl;

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"enter your data:";
    cin>>data;
    for(i=0;i<n;i++)
    {
       if (data==a[i])
       {
         position=i+1;
         break;
       }
    }
       if(position==-1)
       {
           cout<<"element not found "<<endl;
       }
       else
       {
           cout<<"position is :"<<position<<endl;
       }

    return 0;
}
