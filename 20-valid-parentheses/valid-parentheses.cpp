class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        unordered_map<char,char>mpp = {
            {')','('},
            {'}','{'},
            {']','['}
        };
        for(char ch : s)
        {
            if(mpp.find(ch) == mpp.end())
            {
                st.push(ch);
            }
            else if(!st.empty() && mpp[ch] == st.top())
            {
                st.pop();
            }
            else{
                return false;
            }
        }
        return st.empty();
    }
};