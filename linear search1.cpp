#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

int a[10]={1,2,3,4,5,6};
int i,n,value;
int position=-1;

cout <<"enter your value:"<<endl;
cin>>value;
{
   for(i=0;i<6;i++)
   {
       if(value==a[i])
       {
           position=i+1;
           break;
       }
   }
   if(position==-1)
   {
       printf("not found");
   }
   else
   {
       cout<<"position and value:"<<position,value;
   }
}
}
