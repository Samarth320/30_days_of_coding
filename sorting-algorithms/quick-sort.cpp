#include<bits/stdc++.h>
using namespace std;

int findIndex(vector<int>&nums , int low , int high)
{
    int pivot = nums[low];
    int i = low ;
    int j = high;

    while(i < j)
    {
        while(nums[i] <= pivot && i <= high-1)
        {
            i++;
        }

        while(nums[j] > pivot && j >= low+1)
        {
            j--;
        }

        if(i < j)
        swap(nums[i] , nums[j]);
    }

    swap(nums[low] , nums[j]);

    return j;
}

void qucikSort(vector<int>&nums , int low , int high)
{
    if(low < high)
    {
        int pivotIndex = findIndex(nums , low , high);

        qucikSort(nums , low , pivotIndex-1);

        qucikSort(nums , pivotIndex+1 , high);
    }
}

int main()
{
   vector<int>nums{3,114,72,72,12,1,8,4,2,7};
//    vector<int>nums{4,6,2,5,7,9,1,3};
   int n = nums.size();

   qucikSort(nums , 0 , n-1);

    for(auto it:nums){
        cout<<it<<" ";
    }
    cout<<endl;

    return 0;
}