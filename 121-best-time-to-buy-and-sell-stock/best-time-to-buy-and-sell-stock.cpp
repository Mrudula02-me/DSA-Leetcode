class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp = 0;
        int bestb = prices[0];
        int n = prices.size();
        for(int i=0; i<n; i++)
        {
            if(prices[i] > bestb)
            {
                mp = max(mp, prices[i] - bestb );
            }
            bestb = min(bestb, prices[i]);

        }
        return mp;
    }
};