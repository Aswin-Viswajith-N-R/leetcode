class Solution {
public:
    bool isThree(int n) {
        int count = 2;
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                count+=1;
            }
        }
        if(count == 3)
        {
            return true;
        }
        return false;
    }
};