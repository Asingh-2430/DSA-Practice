class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int ans=0;
        for(int i=0; i<prices.size(); i++){
            mini=min(prices[i],mini);
            ans=prices[i]-mini;
            maxi=max(ans, maxi);
        }
       return maxi;
    }
};
