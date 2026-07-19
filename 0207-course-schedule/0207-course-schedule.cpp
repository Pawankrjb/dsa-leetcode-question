class Solution {
public:
    bool toposort(vector<vector<int>>& adj,
                  vector<int>& visitor, int node) {
        visitor[node] = 1;
        for (int neib : adj[node]) {
            if(visitor[neib]==1){
                return true;
            }
            if (visitor[neib] == 0) {
                if(toposort(adj, visitor, neib)){
                    return true;
                }
            }
        }
        visitor[node]=2;
       
        return false;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        
        vector<int> visitor(numCourses, 0);
        for (auto edge : prerequisites) {
            adj[edge[0]].push_back(edge[1]);
        }
        for (int i = 0; i < numCourses; i++) {
            if (visitor[i] == 0) {
                if(toposort(adj,visitor, i)){
                  return false;
                }
            }
        }
       
        return  true;
        
    }
};
