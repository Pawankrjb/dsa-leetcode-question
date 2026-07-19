class Solution {
public:
    vector<int> findOrder(int V, vector<vector<int>>& prerequisites) {
       vector<vector<int>> adj(V);
        vector<int> indegree(V, 0);
        vector<int>result;

        for (auto edge : prerequisites) {
            adj[edge[1]].push_back(edge[0]);
            indegree[edge[0]]++;
        }
        queue<int> q;
        for (int i = 0; i < V; i++) {
            if(indegree[i]==0){
            q.push(i);
            }
            
        }
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            result.push_back(node);

            for (int neib : adj[node]) {
                indegree[neib]--;
                if (indegree[neib] == 0) {
                    q.push(neib);
                }
            }
        }
        if(result.size()==V){
            return result;
        }
        return {};
    }
};