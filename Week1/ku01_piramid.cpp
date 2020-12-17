#include <iostream>
using namespace std;

int main ()
{
    int l, n;
    int all=0;
    int rem=0; // remain
    int res=0; // result
    
    cin >> l >> n;

    for (int i=l; i>=0; i--)
        all += i*i;

    //cout << "all: " << all << endl;

    rem = all-n;
    //cout << "remain: "<< rem << endl;

    int i=l;
    //cout << i << endl;
    while (1)
    {
        if (rem <= 0)
        {
            //cout << res << endl;
            break;
        }
        rem -= i*i;
        i--;
        res++;
        //cout << "res: " << res << endl;
    }
    cout << res << "\n";

    return 0;
}