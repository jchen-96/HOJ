#include <iostream>
#include <algorithm>

//不断的求解两个数的最小公倍数
// 最小公倍数=两数乘积/最大公约数

using namespace std;

int gcd(long long a, long long b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    while (n--)
    {
        int N;
        cin >> N;
        long long res = 1;
        for (int i = 0; i < N; i++)
        {
            int tt;
            cin >> tt;
            res = (res * tt) / gcd(res, tt);
        }
        cout << res << endl;
    }
    return 0;
}
