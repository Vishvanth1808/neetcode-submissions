class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int count = 0;
        int lastSmaller = INT_MIN;
        int longest = 1;
        sort(nums.begin(), nums.end());
        for(int i = 0; i<nums.size(); i++){
            
            if(nums[i] - 1 == lastSmaller){
                count++;
                lastSmaller = nums[i];
            }
            if(nums[i] != lastSmaller){
                count = 1;
                lastSmaller = nums[i];
            }
            longest = max(count, longest);
        }
        return longest;
    }
};
