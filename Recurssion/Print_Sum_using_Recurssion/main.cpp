#include <bits/stdc++.h>
using namespace std;
long long sumFirstN(long long n) {


  if(n<1){
      return n;
  }
 
 return n + sumFirstN(n-1);
}

int main()
{

    long long n = 5;
    long long sum = sumFirstN(5);
    cout << sum;

    return 0;
}