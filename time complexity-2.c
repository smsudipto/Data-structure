#include<stdio.h>
int main()
{
    int n,result;
    scanf("%d",&n);
    result=0;
    for(int i=0;i<=n;i++)
    {
        result=result+i;
    }

    printf("result=%d",result);//time complexity  4,correct answer is O(1)
    return 0;
}


