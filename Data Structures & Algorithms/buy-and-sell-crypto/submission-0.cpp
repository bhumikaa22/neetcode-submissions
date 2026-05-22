class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p = 0 , q = 1;
        int ans = 0;
        while(q < prices.size()){
            int prof =  prices[q] - prices[p];
            if(prof > 0){
                ans = max(ans , prof);
            }else{
                p=q;
            }
            q++;
        }
        return ans;
    }
};
