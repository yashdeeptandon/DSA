#include <iostream>

using namespace std;

void minMaxElement(int arr[], int size)
{
    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < size; i++)
    {
        // finding max element
        if (arr[i] > max)
        {
            max = arr[i];
        }
        // finding min element
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << max << endl;
    cout << min << endl;
}

int main()
{
    int n = 0;
    cin >> n;
    int arr[n];

    // inputing elements in array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    minMaxElement(arr, n);
}