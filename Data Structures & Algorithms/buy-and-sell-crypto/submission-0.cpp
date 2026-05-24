class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int minPrice = prices[0];
        int maxPrice = 0;

         for (int i : prices)
        {
            minPrice = min(minPrice, i);
            maxPrice = max(maxPrice, i - minPrice);
        }   
        return maxPrice;
    }
};
