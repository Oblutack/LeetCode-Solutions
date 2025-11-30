#include <vector>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {

        int maxProfit = 0;

        int min, potential;

        min = prices.at(0);

        for (int i=0;i<prices.size();i++){

            if(prices.at(i)<min){
                min=prices.at(i);
            }

            potential = prices.at(i)-min;
            if(maxProfit<potential){
                maxProfit = potential;
            }

        }

        return maxProfit;
    }
};