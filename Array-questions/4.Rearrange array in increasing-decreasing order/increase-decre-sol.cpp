
#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    void customSort(int arr[], int n) {
        sort(arr , arr+n);   
        
        int m = floor(n/2);
        
        int start = m;
        int end = n-1;
        
        while(start < end)
        {
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        obj.customSort(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
