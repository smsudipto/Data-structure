#include<iostream>
using namespace std;
int main()
{
    int A[10],n;
    cout<<"Enter your n:";
    cin>>n;

    int i;
    cout<<"enter your array:"<<endl;
    for( i=0;i<n;i++)
    {
        cin>>A[i];
    }
      cout<<"print array :"<<" ";
    for(int i=0;i<n;i++)
    {
        cout<<A [i];
    }

}
