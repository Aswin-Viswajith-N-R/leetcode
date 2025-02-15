class Solution {
public:
    int commonFactors(int a, int b) {
        int limit = min(a,b);
        int count = 0;
        for(int i=1;i<=limit;i++)
        {
            if(a%i ==0 && b%i ==0)
            {
                count+=1;
            }
        }
        return count;
    }
};