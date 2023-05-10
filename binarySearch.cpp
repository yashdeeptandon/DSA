#include <iostream>

using namespace std;

void sort(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        if (arr[start] > arr[end])
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
        else
        {
            start++;
        }
    }
}

int binary_search(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;

    int key;

    int arr[n] = {0};

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to be searched! ";
    cin >> key;

    sort(arr, n);
    int index = binary_search(arr, n, key);

    cout << index;
}