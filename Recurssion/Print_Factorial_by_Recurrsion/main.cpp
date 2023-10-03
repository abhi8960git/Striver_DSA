#include<bits/stdc++.h>
using namespace std;

long long fact(int n)
{
    if(n<1)
        return 1;

    return n*fact(n-1);
}
vector<long long> factorialNumbers(long long n) {    
    vector<long long> result;
    for(int i=1;i<=n;i++)
    {
        long long ans = fact(i);
        if(ans>n) break;
        result.push_back(ans);
    }
    sort(result.begin(),result.end());
    return result;
}

int main()
{

    int n = 5;

    vector<long long> result = factorialNumbers(n);
    

    for(auto a : result){
        cout<<a<<" ";
    }


 return 0;
}