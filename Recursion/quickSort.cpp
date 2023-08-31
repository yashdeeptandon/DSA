#include <bits/stdc++.h>

using namespace std;

int createPartition(int arr[], int start, int end)
{
    // initializing pivot to first element...is your choice
    int pivot = arr[start];

    // counting all the elements less than pivot
    int cnt = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= pivot)
            cnt++;
    }

    int pivotIndex = start + cnt; // placing pivot to its correct position
    swap(arr[pivotIndex], arr[start]);

    int i = start;
    int j = end;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quick_sort(int arr[], int start, int end)
{
    // base condition
    if (start >= end)
        return;

    // partition
    int p = createPartition(arr, start, end); // returns the index of correct place for pivot element

    // recursive call to sort the two partitions created

    // for left partition
    quick_sort(arr, start, p - 1);
    // for right partition
    quick_sort(arr, p + 1, end);
}

int main()
{
    int arr[8] = {5, 2, 6, 7, 2, 1, 0, 9};
    int n = 8;

    quick_sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}