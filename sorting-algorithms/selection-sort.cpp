#include<bits/stdc++.h>
using namespace std;

void SelectionSort(vector<int>nums)
{

    int n = nums.size();

    for(int i=0; i<n-1; i++)
    {
        int mini = i;

        for(int j=i+1; j<n; j++)
        {
           if(nums[j] < nums[mini])
           mini = j;
        }
        swap(nums[mini] , nums[i]);
    }
    

    for(auto it:nums){
        cout<<it<<" ";
    }
    cout<<endl;
}

int main()
{
   vector<int>nums{3,114,72,12,1,8,4,2,7};

   SelectionSort(nums);

    return 0;
}