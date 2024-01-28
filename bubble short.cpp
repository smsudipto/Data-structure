#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++ )
    {
        cin>>arr[i];
    }
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<"shorted arry";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<"  ";
    {
        cout<<endl;
    }
    return 0;
}
