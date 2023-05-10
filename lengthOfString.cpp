#include <iostream>

using namespace std;

int getLength(char name[])
{
    int i = 0;
    int count = 0;
    while (name[i] != '\0')
    {
        count++;
        i++;
    }

    return count;
}

int main()
{
    char name[20];
    cin >> name;

    cout << "Length of String : " << getLength(name) << endl;
}