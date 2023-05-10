#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[3][4];
    int sum = 0;
    int maxSum = 0;

    // inputting in the matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << "Sum of " << i + 1 << "row is: " << sum << endl;
        if (sum > maxSum)
        {
            maxSum = sum;
        }
    }

    cout << "Max Sum is: " << maxSum << endl;
}