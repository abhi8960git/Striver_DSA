#include<bits/stdc++.h>
using namespace std;



std::vector<int> generateFibonacciNumbers(int n) {
    std::vector<int> output;
    if (n <= 0) {
        return output;
    }

    output.push_back(0);
    if (n == 1) {
        return output;
    }

    output.push_back(1);

    for (int i = 2; i < n; i++) {
        int next = output[i - 1] + output[i - 2];
        output.push_back(next);
    }

    return output;
}


int main()
{

int n ;
cout<<"enter";
cin>>n;

vector<int> output;

output = generateFibonacciNumbers(n);

for(auto a : output){
cout<<a<<" ";
}
cout<<"aa"



 return 0;
}