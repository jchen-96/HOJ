#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
string start, s, en;

int main(int argc, char const *argv[])
{
    while (getline(cin,start))
    {
        if (start == "ENDOFINPUT")
            break;
        getline(cin, s);
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                if (s[i] >= 'A' && s[i] <= 'E')
                {
                    s[i] = s[i] + 21;
                }
                else
                {
                    s[i] = s[i] - 5;
                }
            }
        }
        cout << s << endl;
        getline(cin, en);
    }

    return 0;
}
