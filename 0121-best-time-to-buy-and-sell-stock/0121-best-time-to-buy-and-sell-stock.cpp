class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
        int minx = prices[0];
        for(int i=1;i<n;i++)
        {
           int cost = prices[i] - minx;
           minx = min(minx,prices[i]);
           profit = max(profit,cost);

        }
        return profit;
        
    }
};