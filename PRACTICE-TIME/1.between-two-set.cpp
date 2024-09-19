

bool check(int a , vector<int>num)
{
    for(int i=0; i<num.size(); i++)
    {
        if(a % num[i] != 0)
        return false;
    }
    return true;
}


int getTotalX(vector<int> a, vector<int> b) {
    vector<int>temp;
    int count = 0;
    int start = a.back();
    int end = b.front();
    
    for(int i=start; i<=end; i++)
    {
        if(check(i,a)){
            temp.push_back(i);
        }
    }
    
    for(int i=0; i<temp.size(); i++)
    {
        int num = temp[i];
        
        bool flag = true;
        
        for(int j=0; j<b.size(); j++)
        {
            if(b[j] % num != 0)
            {
                flag = false;
                break;
            }
        }
        if(flag == true) 
         count++;
    }
    
    return count;
}