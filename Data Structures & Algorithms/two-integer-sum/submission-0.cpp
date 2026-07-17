class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp;
        for(int i = 0; i < nums.size(); i++){
            mpp[nums[i]] = i;
        }
        for(int i = 0; i < nums.size() ; i++){
            int tar = target - nums[i];
            if (mpp.find(tar) != mpp.end() && mpp[tar] != i) return {i, mpp[tar]};
        }
        
        return {-1, -1};
    }
};
