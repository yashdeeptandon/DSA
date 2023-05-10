#include <bits/stdc++.h>

using namespace std;

bool sorted(int arr[], int size)
{
    // base condition
    if (size == 0 || size == 1)
        return true;

    if (arr[0] > arr[1])
        return false;

    return sorted(arr + 1, size - 1);
}

int main()
{
    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << sorted(arr, size);
}