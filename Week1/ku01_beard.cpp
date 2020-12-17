#include <iostream>
using namespace std;

int main ()
{
    int w, h, m, n;

    cin >> w >> h >> m >> n; // 20 12 3 4

    int cutVer[m]; // 2 10 14
    int cutHor[n]; // 1 6 8 10

    for (int i=0; i<m; i++)
    {
        cin >> cutVer[i];
        //cout << cutVer[i] << " ";
    }
    //cout << endl;

    for (int i=0; i<n; i++)
    {
        cin >> cutHor[i];
        //cout << cutHor[i] << " ";
    }
    //cout << endl;

    int areaVer[n+1];
    int areaHor[m+1];

    //cout << n << endl;
    //cout << h << cutHor[0] << endl;
    for (int i=0; i<n+1; i++)
    {
        if (i==0)
            areaVer[i] = cutHor[0];
        else if (i==n)
            areaVer[i] = h - cutHor[i-1];
        else
            areaVer[i] = cutHor[i] - cutHor[i-1];

        //cout << "AreaVer" << i << " " << areaVer[i] << " ";
    }
    //cout << endl;

    //cout << m << endl;
    //cout << w << " " << cutVer[0] << endl;

    for (int j=0; j<m+1; j++)
    {
        if (j==0)
            areaHor[j] = cutVer[j];
        else if (j==m)
            areaHor[j] = w - cutVer[j-1];
        else
            areaHor[j] = cutVer[j] - cutVer[j-1];

        //cout << "AreaHor" << j << " " << areaHor[j] << " ";
    }
    //cout << endl;
	int area, max1=0, max2=0;
    for (int i=0; i<n+1; i++)
    {
        for (int j=0; j<m+1; j++)
        {
            area = areaVer[i] * areaHor[j];
            if (area > max1)
            {
                max2 =  max1;
                max1 = area;
            }
            else if (area > max2)
                max2 = area;
        }
    }

    cout << max1 << " " << max2;
    return 0; 
}