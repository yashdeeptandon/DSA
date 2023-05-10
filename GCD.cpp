#include <bits/stdc++.h>

using namespace std;

int gcd(int x, int y)
{

    if (x == 0)
        return y;

    if (y == 0)
        return x;

    while (x != y)
    {

        if (x > y)
        {
            x = x - y;
        }
        else
        {
            y = y - x;
        }
    }
}

int main()
{
    int num1, num2 = 0;
    cin >> num1 >> num2;

    if (num2 > num1)
    {
        swap(num1, num2);
    }

    int ans = gcd(num1, num2);
    cout << ans;
}