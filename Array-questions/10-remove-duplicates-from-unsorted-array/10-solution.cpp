
    vector<int> removeDuplicate(vector<int>& arr) {
  
        map<int,bool>mp;
        vector<int>ans;
        
        for(int i=0; i<arr.size(); i++)
        {
            if(mp.find(arr[i]) == mp.end())
            {
                mp[arr[i]] = true;
                ans.push_back(arr[i]);
            }
        }
        
        return ans;
    }