#include <bits/stdc++.h>

using namespace std;

bool linearSearch(int arr[], int size, int key)
{

    // base case
    if (size == 0)
        return 0;

    if (arr[0] == key)
        return true;

    return linearSearch(arr + 1, size - 1, key);
}

int main()
{

    int arr[] = {3, 5, 7, 2, 9};
    int size = 5;
    int key = 8;

    cout << linearSearch(arr, size, key);
}