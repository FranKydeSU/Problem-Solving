#include <bits/stdc++.h>
#include <list>
using namespace std;

list<int> ccl[100000];

int main () 
{
    int n;
    int no1, no2;
    char command;
    list<int>::iterator pt;

    cin >> n;
    
    for (int i=0; i<n; i++)
    {
        cin >> command >> no1 >> no2;

        if (command == 'N') {
            ccl[no2-1].push_back(no1);
            continue;
        }
        if (command == 'M') {
            pt = ccl[no2-1].end();
            ccl[no2-1].splice(pt,ccl[no1-1]);
            continue;
        }
    }

    for (int i=0; i<100000; i++)
    { 
        for (pt = ccl[i].begin(); pt != ccl[i].end(); pt++)
            cout << *pt << "\n";
    }

    return 0;
}