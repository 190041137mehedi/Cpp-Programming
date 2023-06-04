#include <bits/stdc++.h>

using namespace std;

class Student {
public:
    string nm;
    int cls;
    char s;
    int id;
    
};


int main() {
    int n;
    cin >> n;

    Student a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if (a[i].id < a[j].id)
            {
                int tmp = a[i].id;
                a[i].id = a[j].id;
                a[j].id = tmp;
            }
            else
            {
                int tmp = a[i].id;
                a[i].id = a[j].id;
                a[j].id = tmp;
            }
        }
    }

     for (int i = 0; i < n; i++) {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << endl;
    }

    return 0;
}

