#include<iostream>
using namespace std;
int main()
{
    string s;
    string s1;
    cout<<"enter your character:";
    cin>>s;
    s1=s.substr(3,4);
    cout<<"substring is:"<<s1;
    return 0;
}
