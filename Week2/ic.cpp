#include <bits/stdc++.h>
#include <list>
using namespace std;

int main ()
{
    int n;
    int num;
    int tmp;
    char command[2];
    list<int> l;
    list<int>::iterator pt;

    cin >> n;

    for (int i=0; i<n; i++)
    {
        //cout << i << " ";
        cin >> command;
        if (command[0] == 'l' && command[1] == 'i') {
            cin >> num;
            l.push_front(num);
            continue;
        }
        else if (command[0] == 'r' && command[1] == 'i') {
            cin >> num;
            l.push_back(num);
            continue;
        }
        else if (command[0] == 'l' && command[1] == 'r') { // the first to the last.
            tmp = *(l.begin());
            l.push_back(tmp);
            l.pop_front();
            continue;
        }
        else if (command[0] == 'r' && command[1] == 'r') { // the last to the first.
            pt = l.end();
            pt--;
            tmp = *(pt);
            l.push_front(tmp);
            l.pop_back();
            continue;
        }
    }
    
    for (auto pt=l.begin(); pt != l.end(); pt++)
        cout << *pt << "\n";
    
    return 0;
}