#include <iostream>

using namespace std;

int getLength(char name[])
{
    int count = 0;
    int i = 0;
    while (name[i] != '\0')
    {
        count++;
        i++;
    }

    return count;
}
int main()
{
    char string[20];
    cin >> string;
    int length = getLength(string);

    for (int i = length - 1; i >= 0; i--)
    {
        cout << string[i];
    }
}