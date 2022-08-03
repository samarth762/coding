class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<=1){return 0;}
        int val=prices[0],n=prices.size(),result=0;
        for(int i=1;i<n;i++){
            if(prices[i]<val){
                val=prices[i];
            }
            result=max(result,prices[i]-val);
        }
        return result;
    }
};