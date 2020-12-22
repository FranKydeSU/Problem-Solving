#include <bits/stdc++.h>
#include <list>
using namespace std;

int main () 
{
    int n;
    int num;
    char command;
    list<int> l;
    list<int>::iterator pt;

    cin >> n;

    for (int i=0; i<n; i++)
    {
        cin >> command >> num;
        if (command == 'I') {
            l.push_front(num);
        }
        if (command == 'D') {
            if (num > l.size())
                continue;
            pt = l.begin();
            for (int j=1; j<num; j++)
            {
                pt++;
            }
            l.erase(pt);
        }
        if (command == 'A') {
            l.push_back(num);
        }
    }
    
    for (auto pt=l.begin(); pt != l.end(); pt++)
        cout << *pt << "\n";

    return 0;
}