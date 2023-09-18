class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n = mat.size() , m = mat[0].size();
        priority_queue<pair<int , int> , vector<pair<int, int>>,
                                          greater<pair<int,int>>> pq;

        for(int i = 0; i < n; i++){
            int cnt = 0;
            for(int j = 0; j < m; j++){
                if(mat[i][j] == 1) cnt++;
            }
            pq.push({cnt , i});
        }
        
        vector<int> ans;
        while(!pq.empty() && k > 0){
            k--;
            int ind = pq.top().second;
            pq.pop();
            ans.push_back(ind);
        }
        return ans;                               
    }
};