#include<stdio.h>
int main()
{
    int n,result;
    scanf("%d",&n);
    result=0;
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=n; j++)
        {
            for(int k=0; k<=n; k++)



            {
                result=result+i;
            }
        }
    }

    printf("result=%d,result=%d\n,result=%d",result);//time complexity  4,correct answer is O(1)
    return 0;
}



