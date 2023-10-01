#include <iostream>
#include <vector>
using namespace std;

vector<int> printNos(int n)
{
    vector<int> result;

    if (n <= 0)
    {
        return result;
    }

    result = printNos(n - 1);

    result.push_back(n);

    return result;
}

int main()
{
    int n;
    cout << "enter the no ";
    cin >> n;

    vector<int> numbers = printNos(n);

    for (int num : numbers)
    {
        cout << num << " ";
    }

    return 0;
}