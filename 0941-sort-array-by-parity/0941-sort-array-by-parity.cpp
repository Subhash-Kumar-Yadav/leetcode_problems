class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
       int n = nums.size();

       int i = 0 , j = n-1;
       while(i <= j){
           int s = nums[i]%2;
           int e = nums[j]%2;

           if(s == 0 && e == 0) i++;
           else if(s == 0 && e != 0) i++ , j--;
           else if(s != 0 && e == 0){
               swap(nums[i] , nums[j]);
               i++;
               j--;
           }
           else j--;
       }
       return nums;
    }
};