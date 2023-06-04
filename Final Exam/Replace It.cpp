#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string x, s;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> s;

        while (x.find(s) != string::npos)
        {
            x.replace(x.find(s), s.length(), "$");
        }

        cout << x << endl;
    }
    return 0;
}
