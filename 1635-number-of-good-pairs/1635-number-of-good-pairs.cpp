class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int i = 0; i < nums.size(); i++) mpp[nums[i]]++;

        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            int n = mpp[nums[i]]-1;
            ans += (n*(n+1))/2;
            mpp.erase(nums[i]);
        }
        return ans;
    }
};