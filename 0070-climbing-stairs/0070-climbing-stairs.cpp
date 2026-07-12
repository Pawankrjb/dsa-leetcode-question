class Solution {
public:
    int climbStairs(int n) {
        vector<int>v(3);
        if(n<=2){
            return n;
        }
        v[0]=0;
        v[1]=1;
        v[2]=1;
        for(int i=1; i<n; i++){
            v[0]=v[1];
            v[1]=v[2];
            v[2]=v[0]+v[1];
           
        }
        return v[2];
    }
};