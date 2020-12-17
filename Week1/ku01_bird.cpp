#include <iostream>
using namespace std;

int main() 
{
    int n; //number of trees.
    int tree[n]; //sequence of trees.
    int pre=0, rear=1, chk=0;
    int res=0;

    cin >> n;

    for (int i=0; i<n; i++)
    {
        cin >> tree[i];
    }

    for (int i=0; i<n; i++)
    {
        if (chk == 0)
        { // if chk tree is the first tree.
            if (tree[chk] > tree[rear])
            {
                res++;
            }
            chk++;
            rear++;
        }
        if (chk == n-1)
        { // if chk tree is the last tree.
            if (tree[chk] > tree[pre])
            {
                res++;
            }
            chk++;
            pre++;
        }
        else
        {
            if (tree[chk] > tree[pre])
            {
                if (tree[chk] > tree[rear])
                {
                    res++;
                }
            }
            chk++;
            pre++;
            rear++;
        }
    }
    cout << res << "\n"; // show number of bird nest.
    return 0;
}