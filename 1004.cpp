#include <iostream>
#include <algorithm>
#include <string>
#include <map>

//统计词频 AC

using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        if (!n)
            break;
        map<string, int> ball;
        string t;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            ++ball[t];
        }

        int tt = 0;
        string res;
        for (const auto &b : ball)
        {
            if(b.second>tt){
                tt = b.second;
                res = b.first;
            }
        }

        cout << res << endl;
    }
}