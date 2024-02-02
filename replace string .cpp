#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str1="This is c language";
    string str2="java language";
    cout <<"Before replacement ,string is:"<<str1<<endl;
    str1.replace(3,4,str2,8,3);
    cout<<"after replacement ,string is :"<<str1<<endl;

    return 0;
}
