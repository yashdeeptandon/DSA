#include <bits/stdc++.h>

using namespace std;

void Merge(int *arr, int start, int end)
{
    int mid = start + (end - start) / 2;

    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copying values to the new arrays
    int mainArrayIndex = start;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    // merge two sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = start;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] > second[index2])
        {
            arr[mainArrayIndex++] = second[index2++];
        }
        else
        {
            arr[mainArrayIndex++] = first[index1++];
        }
    }

    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }
}

void mergeSort(int *arr, int start, int end)
{
    if (start >= end)
        return;

    int mid = start + (end - start) / 2;

    // sorting left half
    mergeSort(arr, start, mid);

    // sorting right half
    mergeSort(arr, mid + 1, end);

    // merge
    Merge(arr, start, end);
}

int main()
{
    int arr[9] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = 9;

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}