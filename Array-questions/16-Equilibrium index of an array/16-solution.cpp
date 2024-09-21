
int findEquilibrium(vector<int>& arr) {
        // code
        
        int left=0;
        int right=0;
        int index = -1;
        int n = arr.size();
        
        int sum = 0;
        
        for(int i=0; i<n; i++)
        {
            sum += arr[i];
        }
        
        for(int i=1; i<n-1; i++)
        {
            left += arr[i-1];
            right = sum - left - arr[i];
            
            if(left == right)
            {
                return i+1;
            }
        }
        
        return index;
    }

    //note we have to return the index in "1 based indexing" that's why return i+1 is done