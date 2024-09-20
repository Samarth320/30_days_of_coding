// 1) solution

  void rotateArr(vector<int>& arr, int d) {
        
        if(d > arr.size())
        {
            d = d % arr.size();
        }
        
        reverse(arr.begin() , arr.begin()+d);
        reverse(arr.begin()+d , arr.end());
        reverse(arr.begin() , arr.end());
    }

// 2) solution    