#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n] = {0};

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i = i + 2)
    {
        if (i + 1 < n)
        {
            // int temp = arr[i];
            // arr[i] = arr[i + 1];
            // arr[i + 1] = temp;

            swap(arr[i],arr[i+1]);  // already predefined function of swaping the elements
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}