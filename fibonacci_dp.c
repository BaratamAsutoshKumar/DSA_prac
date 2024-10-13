#include<stdio.h>
#include<stdlib.h>

int fib(int n, int*dp)
{
    if(n==0 || n==1)
    {
        return n;
    }
    int ans1,ans2;
    if(dp[n-1]==-1)
    {
        dp[n-1]=fib(n-1,dp)+fib(n-2,dp);
    }
    return dp[n-1];

}

int main()
{
    int n;
    scanf("%d",&n);
    int* dp =(int*)malloc(sizeof(int)*(n+1));
    for(int i=0;i<n+1;i++)
    {
        dp[i]=-1;
    }
    int ans=fib(n,dp);
    for(int i=0;i<n+1;i++)
    {
        printf("%d ",dp[i]);
    }
    printf("\nans=%d",ans);
    printf("\nans=%d",dp[n]);
}