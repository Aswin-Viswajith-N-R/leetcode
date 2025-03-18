class Solution {
public:
    double myPow(double x, int n) {
        double res=1.0;
        long long N = n > 0 ? n : -1L*n;
        while(N)
        {
            if(N&1)
            {
                res *= x;
                --N;
            }
            else{
                x *= x;
                N >>= 1;
            }
        }
        if(n<0)
        {
            res = 1.0/res;
        }
        return res;
    }
};