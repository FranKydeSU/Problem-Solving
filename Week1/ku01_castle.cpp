#include <iostream>
using namespace std;

int main ()
{
    int number;// getting the number.
    int i=1;
    int countL = 0;

    cin >> number;

    int tmp = number;
    while (tmp > 0) // Find the level of castle.
    {
        tmp -= i;
        i += 2;
        countL += 1;
    }
    //cout << "Level: " << countL << endl;
    //cout << "Number of Blocks: " << i-2 << endl; // the number of block of that level castle.

    int firstNo=1; // The first number of that Level.
    for (int i=1; i<countL; i++)
    {
        firstNo += (2*i-1);
    }
    //cout << "Firstnumber of Level: " << firstNo << endl;

    int diff;
    diff =  number - firstNo;
    //cout << "Diff: " << diff << endl;

    int des=0;
    for (int i=0; i<countL-1; i++)
    {
        des += 2;
    }

    if (diff%2 != 0) // If diff can divide by 2, that mean that number destory equal to the first number. 
        des -= 1; // but if not, it destories less than 1 wall.

    //cout << "DESTORY: " << des << endl;
    cout << des << "\n";
    return 0;
}