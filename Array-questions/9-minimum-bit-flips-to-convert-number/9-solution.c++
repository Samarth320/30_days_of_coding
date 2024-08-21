
class Solution {
public:

    string convert(int n)
    {
        string ans = "";

        while( n != 1)
        {
            if(n % 2 == 0)
            ans += '0';

            else ans += '1';

            n = n/2;
        }
        ans += '1';

        return ans;
    }

    int minBitFlips(int start, int goal) {
        if(start == 0 && goal == 0) return 0;

        else if(start == goal) return 0;

        int ans = 0;
        int value = start ^ goal;

        string temp = convert(value);
        int n = temp.length();

        for(int i=0; i<n; i++)
        {
            if(temp[i] == '1')
            ans++;
        }
      return ans;
    }
};