
Largest and Second Largest
You are given an array A of N integers.
Find the maximum sum of two distinct integers in the array.

Note: It is guaranteed that there exist at least two distinct integers in the array.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.Each test case consists of multiple lines of input.
The first line of each test case contains single integer N the size of the array.
The next line contains N space-separated integers, denoting the array A

//code

#include<bits/stdc++.h>
using namespace std;

int findMaxSum(vector<int>&nums , int n)
{
    if(n < 2) return -1;
    
    int largest;
    int secLargest = INT_MIN;
    
    largest = nums[0];
    
    for(int i=1; i<n; i++)
    {
        if(nums[i] > largest)
        {
            secLargest = largest;
            largest = nums[i];
        }
        else if(nums[i] > secLargest && nums[i] != largest)
        {
            secLargest = nums[i];
        }
    }
    
    int ans = largest + secLargest;
    
    return ans;
}

int main() {
	int T;
	cin>>T;
	
	while(T--)
	{
	    int n;
	    cin>>n;
	    
	    vector<int>nums(n);
	    for(int i=0; i<n; i++)
	    {
	        cin>>nums[i];
	    }
	    
	    int ans = findMaxSum(nums,n);
	    cout<<ans<<endl;
	}
	
    return 0;
}

