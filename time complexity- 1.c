#include<stdio.h>
int main()
{
    int n,result;
    result=0;
    scanf("%d",&n);
    result=n*(n+1)/2;
    printf("result=%d",result);//time complexity  4,correct answer is O(1)
    return 0;
}

