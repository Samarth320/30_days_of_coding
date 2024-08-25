#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void solve(int num1 , int num2)
{
    bool is_carry = false;
    int count = 0;
    
    while(num1 != 0)
    {
        int temp1 = num1 % 10;
        int temp2 = num2 % 10;
        
        int carry = 0;
        if(is_carry)
        {
            carry = 1;
        }
        
        int sum = temp1 + temp2 + carry;
        
        
        if(sum > 9)
        {
            count++;
            is_carry = true;
        }
        else
            is_carry = false;
        
        num1 /= 10;
        num2 /= 10;
    }
    
    cout<<count<<endl;
}


int main() {
    
    int num1 ,num2;
    cin>>num1;
    cin>>num2;
    
    solve(num1 , num2);
    
    
    return 0;
}