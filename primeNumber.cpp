#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int flag = 0;
    int i = 2;

    while (i < n)
    {
        if (n % i == 0)
        {
            flag++;
        }

        i++;
    }

    if (flag > 0)
    {
        cout << "Not a Prime Number!";
    }
    else
    {
        cout << "Prime Number!";
    }
}