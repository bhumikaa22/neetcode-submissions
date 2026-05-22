class Solution {
public:
    int maxArea(vector<int>& nums) {
        int left = 0 , right = nums.size()-1;
        int ans = 0;
        while(left < right){
            int x = min(nums[left] , nums[right]);
            int count = x * (right - left);
            ans = max(ans , count);
            if(nums[left] < nums[right]){
                left++;
            }else{
                right--;
            }
        }
        return ans;
    }
};
