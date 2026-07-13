class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
         int n=cost.size();
        vector<int>dp(n+1,-1);
      
   
        dp[0]=0;
        dp[1]=0;
        

        
         for(int i=2; i<=n; i++){
           dp[2]=min((dp[1]+cost[i-1]),dp[0]+cost[i-2]);
            dp[0]=dp[1];
            dp[1]=dp[2];
             
            
          

         }
    return dp[1];
        
    
    }
};