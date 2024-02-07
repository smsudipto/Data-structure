#include<iostream>
using namespace std;
int main()
{

int n;
int a[]={1,2,3,4,5,6,7};

int x=3;


{
    int left,mid,right;
    left=0;
    right=6;
    while(left<=right)

    {
      mid=(left+right)/2;
      if(a[mid]==x)
      {
          return mid;
      }
      if(a[mid]<x)
      {
          left=mid+1;
      }
      else
      {
          right=mid-1;
      }
    }

    return-1;
    }


}


