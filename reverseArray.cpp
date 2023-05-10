#include <iostream>

// can also be done by using start and end and while(start<=end) loop

using namespace std;

int main()
{

    int arr[10] = {0};
    int temp = 0;

    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++) // loop will work till size/2 as if we run full,
                                // then the reversed will be again reversed. And inputed array will be displayed
    {
        temp = arr[i];
        arr[i] = arr[10 - 1 - i];
        arr[10 - 1 - i] = temp;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}