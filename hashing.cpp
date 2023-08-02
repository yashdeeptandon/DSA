#include <bits/stdc++.h>

using namespace std;

int main()
{
    // creation
    unordered_map<string, int> m;

    // insertion
    // 1
    pair<string, int> p = make_pair("tandon", 3);
    m.insert(p);

    // 2
    pair<string, int> pair2("yash", 2);
    m.insert(pair2);

    // 3
    m["yashdeep"] = 1; // creation of new key
    m["yashdeep"] = 2; // updation as key is already created

    // Note-> No duplicate entries will be created. Hashmaps have unique entries.

    // search
    cout << m["yashdeep"] << endl;
    cout << m.at("tandon") << endl;

    // cout<<m.at("unknownKey")<<endl;   //gives error as no entry of this key

    cout << m["unknownKey"] << endl; // new key will be created and will be assigned 0 to it using this way
    cout << m.at("unknownKey") << endl;

    // size
    cout << m.size() << endl;

    // to check presence
    cout << m.count("bro") << endl; // if key is not present output: 0 if present output: 1

    // erase
    m.erase("yashdeep");
    cout << m.size() << endl;

    // iteration
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    // usign iterator
    unordered_map<string, int>::iterator it = m.begin();
    while (it != m.end())
    {
        cout << it->first << " " << it->second << endl;
        it++;
    }

    // Note-> while using unordered_map, keys are placed in random order. While in case of map keys are in order of input.
    return 0;
}