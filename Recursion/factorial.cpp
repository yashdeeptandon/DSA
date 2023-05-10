#include <iostream>

using namespace std;

int fact(int num)
{
    if (num > 0)
    {
        return num * fact(num - 1);
    }
    else
    {
        return 1;
    }
}

int main()
{
    int n;
    cin >> n;

    cout << "Factorial of " << n << " is : " << fact(n) << endl;
}