

    vector<int> replaceWithRank(vector<int> &arr, int N){
        
        map<int,int>mp;
        
        for(int i=0; i<N; i++)
        {
            mp[arr[i]] = 0;
        }
        
        int count = 0;
        for(auto it=mp.begin(); it != mp.end(); it++)
        {
            it->second = count;
            count++;
        }
        
        for(int i=0; i<N; i++)
        {
            auto it = mp.find(arr[i]);
            arr[i] = it->second + 1;
        }
        
        return arr;
        
    }