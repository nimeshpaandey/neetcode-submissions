class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     int n = nums.size();
     vector<int> vec(2);
     for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(target - nums[i] == nums[j]){
                vec[0] = i;
                vec[1] = j;
            }
        }
     }
     return vec;   
    }
};
