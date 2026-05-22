class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int> us;
        int left =0 , ans = 0;
        for(int right = 0 ; right < s.size() ; right++){
            while(us.count(s[right])){
                us.erase(s[left]);
                left++;
            }
            us.insert(s[right]);
            ans = max(ans, right - left +1);
        }
        return ans;
    }
};
