class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int m = k%n;
        reverse(nums.end()-m,nums.end());
        reverse(nums.begin(),nums.end()-m);
        reverse(nums.begin(),nums.end());
        
    }
};