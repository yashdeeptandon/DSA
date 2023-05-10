#include <bits/stdc++.h>

using namespace std;

void print(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    // printing the arrays for explanation
    cout << endl;
    print(arr, size, key);
    cout << "value of arr mid is " << arr[mid] << endl;

    // base conditions
    if (size == 0)
        return false;

    if (arr[mid] == key)
        return true;

    if (arr[mid] < key)
        return binarySearch(arr + mid + 1, size - 1 - mid, key);

    if (arr[mid] > key)
        return binarySearch(arr, size - 1 - mid, key);
}

int main()
{

    int arr[] = {2, 4, 6, 10, 14, 18, 22, 38, 49, 55, 222};
    int size = 11;
    int key = 4;

    cout << binarySearch(arr, size, key) << endl;
}