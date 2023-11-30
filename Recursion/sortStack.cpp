#include <bits/stdc++.h>

using namespace std;

void sortFunction(stack<int> &stack, int num)
{
    // base case
    if ((num > stack.top() && !stack.empty()) || stack.empty())
    {
        stack.push(num);
        return;
    }

    int element = stack.top();
    stack.pop();

    // recusrive call
    sortFunction(stack, num);
    stack.push(element);
}

void sortStack(stack<int> &stack)
{
    // Write your code here
    // base case
    if (stack.empty())
    {
        return;
    }

    int num = stack.top();
    stack.pop();

    // recursive call
    sortStack(stack);
    // back tracking
    sortFunction(stack, num);
}

int main()
{
    stack<int> s;
    s.push(5);
    s.push(-2);
    s.push(9);
    s.push(-7);
    s.push(3);

    sortStack(s);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}