#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Merge(vector<int>&nums , int low , int mid , int high)
{
    int left = low;
    int right = mid+1;
    vector<int>temp;

    while(left <= mid && right <= high)
    {
        if(nums[left] <= nums[right])
        {
            temp.push_back(nums[left]);
            left++;
        }
        else{
            temp.push_back(nums[right]);
            right++;
        }
    }

    while(left <= mid)
    {
        temp.push_back(nums[left]);
        left++;
    }

    while(right <= high)
    {
        temp.push_back(nums[right]);
        right++;
    }

    for(int i=low; i<=high; i++)
    {
        nums[i] = temp[i-low];
    }
}

void MergeSort(vector<int>&nums , int low , int high)
{
    //base case
    if(low >= high)
    return;

    int mid = low + (high - low)/2;

    MergeSort(nums , low , mid);
    MergeSort(nums , mid+1 , high);

    Merge(nums , low , mid , high);
}

int main()
{
   vector<int>nums{3,1,0,-3,132,8,4,2,7};
   int n = nums.size();
   int low = 0;

   MergeSort(nums , low , n-1);

   for(auto it:nums){
        cout<<it<<" ";
    }
    cout<<endl;

    return 0;
}