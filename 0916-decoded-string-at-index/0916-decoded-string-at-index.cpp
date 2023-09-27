class Solution {
public:
    string decodeAtIndex(string s, int k) {
        int n = s.size();
        stack<long long int> st;
        st.push(0);

        for(int i = 0; i < n; i++){
            if(isdigit(s[i])){
                long long int length = st.top() * (s[i]-'0');
                st.push(length);
            }
            else st.push(st.top()+1);
        }
        int ln = st.size();
        while(!st.empty()){
            k %= st.top();
            ln--;

            if(k == 0 && isalpha(s[ln-1])) return string(1, s[ln-1]);
            st.pop();
        }
        return "";
    }
};