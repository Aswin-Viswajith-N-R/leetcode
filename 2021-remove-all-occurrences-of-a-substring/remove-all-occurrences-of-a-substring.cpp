class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n1 = s.length();
        int n2 = part.length();
        while(s.find(part) != string::npos)
        {
            s.erase(s.find(part),n2);
        }
        return s;
    }
};