#include<iostream>
#include<cstdio>
using namespace std;

//数字可能很大，当做字符串进行处理 AC
 
 
int main()
{
    char s[1000];
    while(scanf("%s",s))
    {
        if(s[0]=='0') break;
        int sum=0;
        for(int i=0;s[i]!='\0';i++)
        {
           sum+=s[i]-'0';
           if(sum>9)sum=sum%10+sum/10;
        }
        cout<<sum<<endl;
    }
}
 
