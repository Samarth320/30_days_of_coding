#include<bits/stdc++.h>
using namespace std;

void InsertionSort(vector<int>nums)
{
    for(int i=0; i<nums.size()-1; i++)
    {
        for(int j=i+1; j>0; j--)
        {
            if(nums[j] < nums[j-1]){
                swap(nums[j],nums[j-1]);
            }
            else break;
        }
    }
    
    for(auto it:nums){
        cout<<it<<" ";
    }
    cout<<endl;
}

int main()
{
   vector<int>nums{3,114,72,12,1,8,4,2,7};

   InsertionSort(nums);

    return 0;
}