#include<bits/stdc++.h>
using namespace std;
int main()
{

 int arr1[] = {1,2,3,4,5};
 int arr2[] = {2,4,6,8}; 
 int n = sizeof(arr1)/sizeof(arr1[0]);
 int m= sizeof(arr2)/sizeof(arr2[0]);
 int i = 0;
   int j = 0;
    vector<int> ans;
    while (i<n && j<m)
    {
        if (arr1[i]==arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j--;
        }
        else if (arr1[i]<arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    
    }
  for(auto a :ans){
    cout<<a<<endl;
  }
 return 0;
}