#include<bits/stdc++.h>
using namespace std;
int main()
{
// Dynamic array's 

vector<int> v = {3,4,5,5,6,6,4}; 
v.emplace_back(2);
v.push_back(3);

vector<pair<int, int>> vec;

vec.push_back({2,3});

vector<int> vi(4);
vector<char> vu(3,40);


// Iterator in stl 

vector<int>::iterator it_start = v.begin();
vector<int>::iterator it_end = v.end();




cout<< *(it_start) <<endl; 
cout<< *(it_end) <<endl;

for(vector<int>::iterator it = it_start; it != it_end ; it ++){
    cout<< *(it) <<" " ;
}



 return 0;
}