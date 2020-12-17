#include <iostream>
using namespace std;

int findMin(int sum[], int n) // Find the minest price.
{
    int Min = sum[1];
    for (int i=1; i<n; i++)
    {
        if (sum[i] < Min)
            Min = sum[i];
    }
    return Min;
}

int main ()
{
	int n;
	int num[3+1]; // Array of number of product.
	int price[3+1]; // Array of price of product.

    for (int i=1; i<4; i++)
    {
        cin >> price[i];
        //cout << "Price: " << price[i] << "  " << endl;
    }

	for (int i=1; i<4; i++)
    {
		num[i] = 0;
		//cout << "Num: " << num[i] << " " << endl;
    }

    cin >> n;

	for (int i=0; i<n; i++)
	{ // Add to array of number of product.
		int input;
		cin >> input;
		switch (input)
		{
			case 1: num[1] += 1; break;
			case 2: num[2] += 1; break;
			case 3: num[3] += 1; break;
		}
	}

    int sum[4];
    for (int i=1; i<4; i++)
    { // all sum of price of each product.
        sum[i] = price[i] * num[i];
        //cout << "Sum: " << sum[i] << " " << endl;
    }
    // Finally, Find the minest of price.
	cout << findMin(sum, 4) << "\n";

	return 0;
}