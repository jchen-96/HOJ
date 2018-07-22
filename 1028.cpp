#include<cstdio>
#include<iostream>
typedef __int64 ll;

//不是很懂
 
using namespace std;
 
ll dp[125][125];
 
int main()
{
    ll n,i,j;
    while(scanf("%d",&n)==1)
    {
        for(i=0;i<122;i++)
        {
            dp[i][1]=1;
            dp[1][i]=1;
        }
        for(i=2;i<122;i++)
        {
            for(j=2;j<122;j++)
            {
                if(j>i) dp[i][j]=dp[i][i];
                if(j==i) dp[i][j]=dp[i][j-1]+1;
                if(j<i) dp[i][j]=dp[i][j-1]+dp[i-j][j];
            }
        }
        printf("%I64d\n",dp[n][n]);
    }
    return 0;
}
