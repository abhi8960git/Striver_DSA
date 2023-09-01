#include<bits/stdc++.h>
using namespace std;
int main()
{

    pair<int, int> p = {1,3};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int, pair<int,int>> q = {1,{3,4}};

    cout<<q.first<<" "<<q.second.second<<" "<<q.second.first<<endl;

    pair<int , int>arr[] ={{9,4}, {3,4}};

    cout<<arr[0].second<<endl;





 return 0;
}