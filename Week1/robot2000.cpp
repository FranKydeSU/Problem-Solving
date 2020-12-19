#include <bits/stdc++.h>
using namespace std;
#include <cstring>

int main ()
{
    char op1000[100];
    int dir=0;

    cin >> op1000;

    for (int i=0; i<strlen(op1000); i++)
    {
        if (op1000[i] == 'N') {
            if (dir == 0) {
                cout << "F";
                continue;
            }
            else if (dir == 1) {
                cout << "RRR";
                dir = 0;
            }
            else if (dir == 2) {
                cout << "RR";
                dir = 0;
            }
            else if (dir == 3) {
                cout << "R";
                dir = 0;
            }
            cout << "F";
        }
        if (op1000[i] == 'E') {
            if (dir == 1) {
                cout << "F";
                continue;
            }
            else if (dir == 0) {
                cout << "R";
                dir = 1;
            }
            else if (dir == 2) {
                cout << "RRR";
                dir = 1;
            }
            else if (dir == 3) {
                cout << "RR";
                dir = 1;
            }
            cout << "F";
        }
        if (op1000[i] == 'S') {
            if (dir == 2) {
                cout << "F";
                continue;
            }
            else if (dir == 0) {
                cout << "RR";
                dir = 2;
            }
            else if (dir == 1) {
                cout << "R";
                dir = 2;
            }
            else if (dir == 3) {
                cout << "RRR";
                dir = 2;
            }
            cout << "F";
        }
        if (op1000[i] == 'W') {
            if (dir == 3) {
                cout << "F";
                continue;
            }
            else if (dir == 0) {
                cout << "RRR";
                dir = 3;
            }
            else if (dir == 1) {
                cout << "RR";
                dir = 3;
            }
            else if (dir == 2) {
                cout << "R";
                dir = 3;
            }
            cout << "F";
        }
        if (op1000[i] == 'Z') {
            dir = 0;
            cout << "Z";
        }
    }

    return 0;
}
