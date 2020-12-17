#include <iostream>
using namespace std;

int main ()
{
    int l, n;
    cin >> l >> n;

    int count=0;
    int level=0;
    int tayang=1;

    while (1)
    {
        if (count >= n)
            break;

        for (int i=0; i<l; i++)
        {
            count += tayang;
            tayang++;
        }
        level++;
    }

    cout << level << "\n";
    return 0;
}