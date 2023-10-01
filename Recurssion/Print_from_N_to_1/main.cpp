


#include <iostream>
#include <vector>
using namespace std;


vector<string> printNTimes(int n) {
	vector<string> result;
	// Base Case
	if(n <= 0){
		return result;
	}
    // Recursive Case 
	 result = printNTimes(n-1);

	 result.push_back("Coding Ninjas");

	 return result;
	


}




int main()
{
    int n;
    cout << "enter the no ";
    cin >> n;

    vector<string> numbers =  printNTimes(n);

    for (string num : numbers)
    {
        cout << num << " ";
    }

    return 0;
}