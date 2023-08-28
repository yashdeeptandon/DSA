#include <bits/stdc++.h>

using namespace std;

void reverseString(string &str, int i, int j)
{
    if (i > j)
        return;

    swap(str[i], str[j]);
    i++;
    j--;

    return reverseString(str, i, j);
}

int main()
{

    string str = "abcde";
    int i = 0;
    int j = str.length() - 1;
    reverseString(str, i, j);
    cout << str;
}