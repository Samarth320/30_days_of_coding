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

class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n=nums.size();
        vector<int>temp(n);

        for(int i=0; i<n; i++)
        {
            temp[ (i+k) % n ] = nums[i]; 
        }

        nums = temp;
    }
};