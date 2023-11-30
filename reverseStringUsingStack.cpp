#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;

    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        s.push(str[i]);
    }

    string reversedString;
    for (int i = 0; i < str.length(); i++)
    {
        reversedString.push_back(s.top());
        s.pop();
    }

    cout << reversedString << endl;
}