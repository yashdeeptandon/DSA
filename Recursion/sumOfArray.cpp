#include <bits/stdc++.h>

using namespace std;

int getSum(int arr[], int size)
{
    // base condition
    if(size == 0)
    return 0;

    if(size == 1)
    return arr[0];

    int remainingPart = getSum(arr + 1, size - 1);
    int sum = arr[0] + remainingPart;

    return sum;
}

int main()
{
    int arr[] = {2, 5, 7, 19, 45};
    int size = 5;
    cout << getSum(arr, size) << endl;
}