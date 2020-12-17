#include <iostream>
#include <cstring>
using namespace std;

int main ()
{
    int x=0, y=0; //coordinates.
    char order[100]; // Get the direction.

    cin >> order;

    for (int i=0; i<strlen(order); i++)
    {
        switch (order[i])
        {
            case 'N': y += 1; break;
            case 'W': x -= 1; break;
            case 'S': y -= 1; break;
            case 'E': x += 1; break;
            case 'Z': x = 0; y = 0; break;
            default : break;
        }
    }
    cout << x << " " << y;
    return 0;
}