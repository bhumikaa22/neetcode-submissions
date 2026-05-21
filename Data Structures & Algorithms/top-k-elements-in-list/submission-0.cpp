class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int>um;
        for(int i=0 ; i<nums.size() ; i++){
            um[nums[i]]++;
        }
        vector<vector<int>> bucket (nums.size() + 1);
        for(auto &p : um){
            bucket[p.second].push_back(p.first);
        }
        vector<int> result;
        for(int i=bucket.size()-1 ; i>=0 && result.size() < k ; i--){
            for(int num : bucket[i]){
                result.push_back(num);
                if(result.size() == k) break;
            }
        }
        return result;
    }
};
