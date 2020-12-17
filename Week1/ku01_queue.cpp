#include <iostream>
using namespace std;

int findMax(int queue[], int n)
{
	int Max;
	Max = queue[1];
	for (int i=1; i<n; i++)
	{
		if (queue[i] > Max)
			Max = queue[i];
	}
	return Max;
}

int main () 
{
	
    int n, l;

    cin >> n >> l;

    int queue[n+1], want[l+1];

    for (int i=1; i<n+1; i++)
    	cin >> queue[i];
    
    for (int i=1; i<l+1; i++)
    	cin >> want[i];
    
    for (int i=1; i<l+1; i++)
    {
    	if (want[i] == 1)
    	{
    		//cout << "FIRST" << endl;
    		cout << 0 << "\n";
    	}
    	else if (queue[want[i]] > findMax(queue, want[i]))
    	{
    		//cout << "SECOND" << endl;
    		cout << 0 << "\n";
    	}
    	else
    	{
    		//cout << "THIRD" << endl;
    		cout << findMax(queue, want[i]) - queue[want[i]] + 1 << "\n";
		}
	}

	return 0;
}