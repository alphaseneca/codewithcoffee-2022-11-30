#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    string s;

    cin >> s;

    int len;
    len = s.length();

    for (int i = 0; i < len; i++)
    {
        if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
        {
            cout << s[i];
        }
    }

    cout << "\n";
    for (int i = 0; i < len; i++)
    {
        if ((s[i] >= 48 && s[i] <= 57))
        {
            cout << s[i];
        }
    }

    return 0;
}
