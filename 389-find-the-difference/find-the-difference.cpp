class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int n = min(s.length(),t.length()),i;
        for(i=0;i<n;i++)
        {
            if(s[i]!=t[i])
            {
                return t[i];
            }
        }
        return t[i];
    }
};