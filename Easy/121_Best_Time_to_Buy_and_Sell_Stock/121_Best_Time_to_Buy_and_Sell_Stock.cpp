class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int L = 0;
        int R = 1;
        int max = prices.size();
        // int i = 0;
        //vector<int> max_profit;
        int old_profit = 0;
        int current_profit = 0;
        int max_profit = 0;
        while(R < max)
        {
            if(prices[L] > prices[R])
                L = R;
            else
            {
                current_profit = prices[R] - prices[L];
                if(current_profit > max_profit)
                {
                    old_profit = max_profit;
                    max_profit = current_profit;
                }
                // max_profit.push_back(prices[R] - prices[L]);
            }
            R++;
        }


        //if (max_profit.empty())
         //   return 0; 
        // auto max_price_iter = std::max_element(max_profit.begin(), max_profit.end());
        // int output = *max_price_iter;
        return max_profit;
    }
};