#include <bits/stdc++.h>
using namespace std;
#include <cstring>

int main ()
{
    int n; // Number of number.

    cin >> n;

    int num[n+n-1];
    char oper[n+n-1];
    char all[n+n-1][100];
    //cout << n+n-1 << endl;

    for (int i=0; i< n+n-1; i++) // input all in arrays.
    {
        cin >> all[i];
        //cout << i << " " << all[i] << "\n";
    }

    for (int i=0; i<n+n-1; i++) // separate kind of input.
    {
        if ((all[i][0] == '+') || (all[i][0] == '-'))
        {
            //cout << "IF" << "\n";
            oper[i] = all[i][0];
        }
        else
        {
            //cout << "ELSE" << "\n";
            int tmp=0;
            int res=0;
            for (int j=strlen(all[i])-1; j>= 0; j--)
            {
                tmp += ((all[i][j])-'0')*(pow(10,res));
                res++;
            }
            num[i] = tmp;
        }
    }
    /*
    for (int i=0; i<n+n-1; i+=2)
    {
        cout << "OPER: " << oper[i+1] << " ";
        cout << "NUM: " << num[i] << " ";
    }
    */
    int ans = num[0];
    for (int i=0; i<n+n-1; i+=2) // calculate.
    {
        if (oper[i+1] == '+')
        {
            //cout << "PLUS" << "\n";
            ans += num[i+2];
            //cout << num[i+2] << " ";
        }
        if (oper[i+1] == '-')
        {
            //cout << "MINUS" << "\n";
            ans -= num[i+2];
            //cout << num[i+2] << " ";
        }
        else
            continue;
    }
    cout << ans << "\n";

    return 0;
}
