#include <bits/stdc++.h>

using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k)
{
    // Write your code here
    //* brute force
    // int len = 0;
    // for (int i = 0; i < a.size(); i++)
    // {
    //     int sum = 0;
    //     for (int j = i; j < a.size(); j++)
    //     {
    //         sum = sum + a[j];
    //         if (sum == k)
    //         {
    //             len = max(len, j - i + 1);
    //         }
    //     }
    // }

    //* better using hashmap
    map<long long, int> preSumMap;
    long long sum = 0;
    int len = 0;
    preSumMap[0] = -1;
    for (int i = 0; i < a.size(); i++)
    {
        sum += a[i];
        if (preSumMap.find(sum - k) != preSumMap.end()) //* sum - k = prefix sum
        {                                               //! !=preSumMap.end() check with previous values, leaving the end value or the current updated value
            len = max(len, i - preSumMap[sum - k]);
        }
        if (preSumMap.find(sum) == preSumMap.end())
        {
            preSumMap[sum] = i;
        }
    }

    return len;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long k;
    cout << "Sum K: ";
    cin >> k;
    int ans = longestSubarrayWithSumK(arr, k);
    cout << ans;
}