#include <iostream>

using namespace std;

int pivotElement(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }

        mid = start + (end - start) / 2;
    }

    return start;
}

int main()
{
    int n = 0;
    int pivot = 0;
    cin >> n;

    int arr[n] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    pivot = pivotElement(arr, n);

    cout << pivot;
}