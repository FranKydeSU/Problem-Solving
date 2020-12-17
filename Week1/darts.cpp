#include <iostream>
using namespace std;
#include <math.h>

int main ()
{
    int n; // number of darts.
    int scores=0; // scores.
    float pos; // position of darts.
    int x, y; // coordinates.

    cin >> n;

    for (int i=0; i<n; i++)
    {
        cin >> x >> y;
        //cout << x << " " << y << endl;
        pos = sqrt((x*x) + (y*y));
        //cout << pos << endl;
        if (pos <= 2) // if the dart get in radius 2,4,6,8 and 10.
            scores += 5;
        else if (pos <= 4)
            scores += 4;
        else if (pos <= 6)
            scores += 3;
        else if (pos <= 8)
            scores += 2;
        else if (pos <= 10)
            scores += 1;
        else
            scores += 0;
    }
    
    cout << scores;
    return 0;
}