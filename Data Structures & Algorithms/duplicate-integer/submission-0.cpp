class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool isD = false;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i = 1; i < n; i++){
            if(nums[i]==nums[i-1]){
                isD = true;
                break;
            }
        }
        return isD;
    }
};