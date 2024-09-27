#include<iostream>
using namespace std;

    int binary_to_decimal(string str) {
        long long ans = 0;
        
        long long pow_of_two = 1;
        int n = str.length();
        
        for(int i=n-1; i>=0; i--)
        {
            if(str[i] == '1')
            ans += pow_of_two;
            
            pow_of_two = pow_of_two * 2;
        }
        
        return ans;
    }

int main()
{

    string str = "10001000";
    long long ans = binary_to_decimal(str);

    cout<<"answer is "<<ans;

    return 0;
}