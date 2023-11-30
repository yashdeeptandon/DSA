#include <bits/stdc++.h>

using namespace std;

class Solution
{
    bool isSafe(vector<vector<int>> &m, int n, int x, int y, vector<vector<bool>> visited)
    {
        if ((x < n && x >= 0) && (y < n && y >= 0) && (visited[x][y] == false) && (m[x][y] == 1))
        {
            return true;
        }
        return false;
    }
    void solve(vector<vector<int>> &m, int n, vector<string> &ans, vector<vector<bool>> visited, int x, int y, string path)
    {
        // base case
        if (x == n - 1 && y == n - 1)
        {
            ans.push_back(path);
            return;
        }

        visited[x][y] = true;

        // 4-choices -> D, L, R, U
        int newX = 0;
        int newY = 0;

        // DOWN
        newX = x + 1;
        newY = y;
        if (isSafe(m, n, newX, newY, visited))
        {
            path.push_back('D');
            solve(m, n, ans, visited, newX, newY, path);
            path.pop_back();
        }

        // LEFT
        newX = x;
        newY = y - 1;
        if (isSafe(m, n, newX, newY, visited))
        {
            path.push_back('L');
            solve(m, n, ans, visited, newX, newY, path);
            path.pop_back();
        }

        // RIGHT
        newX = x;
        newY = y + 1;
        if (isSafe(m, n, newX, newY, visited))
        {
            path.push_back('R');
            solve(m, n, ans, visited, newX, newY, path);
            path.pop_back();
        }

        // UP
        newX = x - 1;
        newY = y;
        if (isSafe(m, n, newX, newY, visited))
        {
            path.push_back('U');
            solve(m, n, ans, visited, newX, newY, path);
            path.pop_back();
        }

        visited[x][y] = false;
    }

public:
    vector<string> findPath(vector<vector<int>> &m, int n)
    {
        // Your code goes here
        vector<string> ans;

        if (m[0][0] == 0)
            return ans;

        vector<vector<bool>> visited(n, vector<bool>(n, false));
        int srcx = 0;
        int srcy = 0;
        string path;

        solve(m, n, ans, visited, srcx, srcy, path);
        sort(ans.begin(), ans.end());
        return ans;
    }
};