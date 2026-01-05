class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int tp = 0;
        int bestBuy = prices[0];

        for(int i = 1;i<prices.size();i++){
          int mp = 0;
            if(prices[i]>bestBuy){
                mp = max(mp,prices[i] - bestBuy);
                tp+=mp;
                bestBuy = prices[i];
            }else{
                bestBuy = min(bestBuy,prices[i]);
            }
            
        }
        return tp;
    }
};
