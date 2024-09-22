#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void BubbleSort(vector<int>nums)
{
    int n = nums.size();

    for(int i=0; i<n-1; i++)
    {
        bool flag = false;

        for(int j=0; j<n-1-i; j++)
        {
            if(nums[j] > nums[j+1])
            {
                swap(nums[j] , nums[j+1]);
                flag = true;
            }
        }
        if(flag == false)
        break;
    }

    for(auto it:nums){
        cout<<it<<" ";
    }
    cout<<endl;
}

int main()
{
   vector<int>nums{3,1,8,4,2,7};

   BubbleSort(nums);

    return 0;
}