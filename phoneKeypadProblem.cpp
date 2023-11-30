#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    // returns alphabets corresponding to the digit
    string alphabet(char digit)
    {
        string letters;
        switch (digit)
        {
        case '2':
            letters = "abc";
            break;

        case '3':
            letters = "def";
            break;

        case '4':
            letters = "ghi";
            break;

        case '5':
            letters = "jkl";
            break;

        case '6':
            letters = "mno";
            break;

        case '7':
            letters = "pqrs";
            break;

        case '8':
            letters = "tuv";
            break;

        case '9':
            letters = "wxyz";
            break;
        }
        return letters;
    }

    void solve(int index, string digits, string output, vector<string> &ans)
    {
        // base condition
        if (index >= digits.length())
        {
            ans.push_back(output);
            return;
        }

        // processing
        char digit = digits[index];
        string letters = alphabet(digit);

        for (int i = 0; i < letters.length(); i++)
        {
            output.push_back(letters[i]);
            solve(index + 1, digits, output, ans);
            output.pop_back();
        }
    }

    vector<string> letterCombinations(string digits)
    {
    }
};

int main()
{
}