class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int profit=0;
         int buy=prices[0];
         int currentprofit;
         int total=0;

         for(int i=1;i<prices.size();i++){
            if(prices[i]<buy){
                buy=prices[i];
            }else{
                currentprofit=prices[i]-buy;
                
                total+=currentprofit;
                buy=prices[i];
               
                
            }
         }
         return total;
    }
    
};