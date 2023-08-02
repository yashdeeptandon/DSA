#include <bits/stdc++.h>

using namespace std;

char getMaxOccuringChar(string str)
{
    // Your code here
    map<char, int> mp; //* as automatically sort alphabetically
    vector<int> ans;
    for (int i = 0; i < str.length(); i++)
    {
        mp[str[i]]++;
    }
    for (auto pr : mp)
    {
        ans.push_back(pr.second);
    }
    sort(ans.begin(), ans.end());
    int l = ans[ans.size() - 1];
    char p;
    for (auto pr : mp)
    {
        if (pr.second == l)
        {
            p = pr.first;
            break;
        }
    }
    return p;
}

int main()
{
    string str;
    cout << "Enter String: ";
    cin >> str;
    char ans = getMaxOccuringChar(str);
    cout << ans << endl;
}