class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        for(int low = 0; low < nums.size() - 2; low++){
            if (low > 0 && nums[low - 1] == nums[low]){
                continue;
            }
            int mid = low + 1;
            int high = nums.size() - 1;

            while (mid < high){
                if(nums[low] + nums[mid] + nums[high] == 0){
                    ans.push_back({nums[low], nums[mid], nums[high]});

                    mid++;
                    high--;

                    while(mid < high && nums[mid] == nums[mid - 1]) mid++;
                    while(mid < high && nums[high] == nums[high+1]) high--;
                }

                else if (nums[low] + nums[mid] + nums[high] < 0){
                    mid++;
                }
                
                else high--;
            }
        }
        return ans;
    }
};
