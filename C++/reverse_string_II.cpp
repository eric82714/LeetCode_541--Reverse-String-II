class Solution {
public:
    string reverse(string s, int pos, int length) {
        int f = pos + length - 1;
        for(int i = 0; i < length/2; i++) {
            char tmp = s[pos+i];                
            s[pos+i] = s[f-i];
            s[f-i] = tmp;
        }
        return s;
    }         
    string reverseStr(string s, int k) {
        for(int i = 0; i < s.size(); i = i + 2*k) {
            if(s.size()-i < k) s = reverse(s, i, s.size()-i);
            else if(s.size()-i >= k and s.size()-i < 2*k) s = reverse(s, i, k);
            else s = reverse(s, i, k);
        }
        return s;
    }
};
