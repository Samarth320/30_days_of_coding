/* Given an array, arr of integers, your task is to return the smallest and second smallest element in the array. If the smallest and second smallest do not exist, return -1.

Examples:

Input: arr[] = [2, 4, 3, 5, 6]
Output: 2 3 
Explanation: 2 and 3 are respectively the smallest and second smallest elements in the array.
Input: arr[] = [1, 1, 1]
Output: -1
Explanation: Only element is 1 which is smallest, so there is no second smallest element.
Expected Time Complexity: O(n)
Expected Auxillary Space: O(1)   */


// code 

//{ Driver Code Starts
#include<bits/stdc++.h>
#include<limits.h>
#include<random>
#include<sstream>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        vector<int>ans;
        
        int smallest = arr[0];
        int sec_small = INT_MAX;
        
        if(arr.size() == 1)
        {
            ans.push_back(-1);
            return ans;
        }
        
        for(int i=1; i<arr.size(); i++)
        {
            if(arr[i] < smallest)
            {
                sec_small = smallest;
                smallest = arr[i];
            }
            else if(arr[i] < sec_small && arr[i] != smallest)
            {
                sec_small = arr[i];
            }
        }
        
        if(sec_small == INT_MAX)
        {
            ans.push_back(-1);
            return ans;
        }
        
        ans.push_back(smallest);
        ans.push_back(sec_small);
        
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        vector<int> ans = ob.minAnd2ndMin(arr);
        if (ans[0] == -1)
            cout << -1 << endl;
        else
            cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
// } Driver Code Ends