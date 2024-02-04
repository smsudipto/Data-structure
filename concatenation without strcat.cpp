#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    char s1[50]=" My name is ";
    char s2[]=" sudipto mandal.";
    int i=0, len=0,j=0;
    while(s1[i]!='\0')
    {
        i++;
        len++;
    }
    cout<<"len="<<len<<endl;
    while (s2[j]!='\0')
    {
        s1[len+j]=s2[j];
        j++;

    }
       cout<<"string s1="<<s1;
}

