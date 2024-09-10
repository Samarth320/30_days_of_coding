class Solution {
public:

    static bool cmp(pair<int,int>&a , pair<int,int>&b)
    {
        if(a.second < b.second) return a.second < b.second;

        else if(a.second == b.second) return a > b;

        else return false;
    }

    vector<int> frequencySort(vector<int>& nums) {

        if(nums.size() == 1)  return nums;

        map<int,int>mp;
        vector<int>ans;

        for(int i=0; i<nums.size(); i++)
        {
            mp[nums[i]]++;
        }

        if(mp.size() == 1) return nums;

        vector<pair<int,int>>p;

        for(auto it:mp)
        {
            p.push_back(it);
        }

        sort(p.begin(),p.end(),cmp);

        for(auto it:p)
        {
            int count = it.second;
            int value = it.first;

            while(count--)
            {
                ans.push_back(value);
            }
        }
     return ans;
    }
};