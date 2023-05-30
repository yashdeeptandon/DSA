#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int nums[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int d;
    cin >> d;
    // we get same array after rotating n times
    d = d % n;

    reverse(nums, nums + d);
    reverse(nums + d, nums + n);
    reverse(nums, nums + n);

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
}