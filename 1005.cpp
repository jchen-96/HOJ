// // 直接循环会超时
// #include <iostream>
// #include <algorithm>
// #include <cstdio>
// #define Max_N 3

// using namespace std;

// int dp[Max_N];

// int main()
// {
//     int a, b, n;
//     while (scanf("%d %d %d", &a, &b, &n))
//     {
//         if (a == 0 && b == 0 && n == 0)
//         {
//             break;
//         }
//         dp[1] = 1;
//         dp[2] = 1;
//         a = a % 7;
//         b=b%7;
//         for (int i = 3; i <= n; i++)
//         {
//             dp[i % 3] = (a * dp[(i - 1) % 3] + b * dp[(i - 2) % 3]) % 7;
//             cout << dp[i % 3] << endl;
//         }
//         printf("%d\n", dp[n % 3]);
//     }
//     return 0;
// }


//AC

// 最大的循环节不会超过59
#include <iostream>
using namespace std;
int arr[50];
int main()
{
    int n,a,b;
    arr[1]=arr[2]=1;
    while(cin>>a>>b>>n)
    {
        if(a==0&&b==0&&n==0)
            break;
        int minn=n<50?n:50;//一个小小的优化
        for(int i=3; i<=minn; i++)
        {
            arr[i]=(a*arr[i-1]+b*arr[i-2])%7;
        }
        cout<<arr[n%49]<<endl;
 
    }
    return 0;
}

