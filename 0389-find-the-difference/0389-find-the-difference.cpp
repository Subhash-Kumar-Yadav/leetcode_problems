class Solution {
public:
    char findTheDifference(string s, string t) {
        int n = s.size() , m = t.size();
        unordered_map<char, int> mpp;

        for(int i= 0; i < n; i++) mpp[s[i]]++;

        char ch;
        for(int i = 0; i < m; i++){
            if(mpp.find(t[i]) == mpp.end()) ch = t[i];
            else{
                mpp[t[i]]--;
                if(mpp[t[i]] == 0) mpp.erase(t[i]);
            }
        }

        return ch;
    }
};