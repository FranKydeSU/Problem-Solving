#include <iostream>
using namespace std;

int main ()
{
    int n; // Number of legacy.

    cin >> n;

    int legacy[n];
    int value = 0; // the most value.
    for (int i=0; i<n; i++)
    {
        cin >> legacy[i];
        if (legacy[i] < 0)
            continue;
        else
            value += legacy[i];
    }

    cout << value;
    return 0;
}