#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,j,a[10];
    int n;
    cout<<"enter your n:";
    cin>>n;
    cout<< "inter your array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
       cout<<"print your array:"<<endl;
    for(j=0;j<n;j++)
    {
        cout<<a[j];
    }
   int left=0;
    int right=n;
    int mid;
    int x;
    cout<<""<<endl;
    cout<<"searching value:";
    cin>>x;
    {
    while(left<=right)
    {
        mid=(left+right)/2;
        if(a[mid]==x)
        {
       cout<<"Element found at index:"<<mid<<endl;
       return 0;
        }
        else if(a[mid]<x)
        {

           left=mid+1;


        }
        else
        {
            right=mid-1;
        }
    }
    cout<<"Element not found:"<<endl;
    return 0;
}

   getch();
}
