#include <bits/stdc++.h>
using namespace std;
int main()
{
    // take input
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // recompute

    int hash[13] = {0};

    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    // fetch
    int q;
    cin >> q;

    while (q--)
    {
        int number;
        cin >> number;
        cout << hash[number] << endl;
    }
    return 0;
}