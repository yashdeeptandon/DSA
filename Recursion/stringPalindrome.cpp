#include <bits/stdc++.h>

using namespace std;

bool palindrome(string str, int i, int j)
{
    if (i > j)
        return true;

    if (str[i] != str[j])
        return false;

    return palindrome(str, i + 1, j - 1);
}

int main()
{
    string str = "naman";
    int i = 0;
    int j = str.length() - 1;

    cout << palindrome(str, i, j);
}