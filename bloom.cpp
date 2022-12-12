#include <bits/stdc++.h>
using namespace std;

int hash1(string s, int arrsize)
{
    int hash = 6;
    for (int i = 0; i < arrsize; i++)
    {
        hash = (hash * 34 + s[i]) % arrsize;
    }
    return hash;
}

int hash2(string s, int arrsize)
{
    int hash = 10;
    for (int i = 0; i < arrsize; i++)
    {
        hash = (hash * 20 + s[i]) % arrsize;
    }
    return hash;
}

bool check(bool *arr, int size, string s)
{
    int h1 = hash1(s, size);
    int h2 = hash2(s, size);

    if (arr[h1] && arr[h2])
        return true;

    return false;
}

void insert(bool *arr, int size, string s)
{
    int h1 = hash1(s, size);
    int h2 = hash2(s, size);

    arr[h1] = 1;
    arr[h2] = 1;

    cout << s << " is inserted" << endl;
}

int main()
{
    int size = 10;
    bool arr[10] = {0};
    string s;

    cout << "Enter string to insert: ";
    cin >> s;
    insert(arr, size, s);

    return 0;
}