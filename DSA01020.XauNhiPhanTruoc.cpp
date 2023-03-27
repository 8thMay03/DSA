#include <bits/stdc++.h>
using namespace std;
bool check(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
            return 0;
    }
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (check(s))
        {
            for (int i = 0; i < s.size(); i++)
            {
                s[i] = '1';
            }
        }
        else
        {
            int i = s.size() - 1;
            while (s[i] == '0')
                i--;
            s[i] = '0';
            for (int j = i + 1; j < s.size(); j++)
            {
                s[j] = '1';
            }
        }
        cout << s << endl;
    }
}