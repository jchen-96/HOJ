#include <iostream>
#include <algorithm>

//简单模拟题目 AC

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        int res = 0;
        int pre = 0;
        int cur = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> cur;
            if (cur > pre)
            {
                res += (cur - pre) * 6 + 5;
            }
            else if (cur < pre)
            {
                res += (pre - cur) * 4 + 5;
            }
            else
            {
                res += 5;
            }
            pre = cur;
        }
        cout << res << endl;
    }
    return 0;
}
