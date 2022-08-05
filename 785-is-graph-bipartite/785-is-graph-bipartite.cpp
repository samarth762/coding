class Solution {
public:
    bool dfs(vector<vector<int>> &graph,vector<int> &color,int node,int n){
        for(auto it:graph[node]){
            if(color[it]==-1){
                color[it]=1-color[node];
                if(!dfs(graph,color,it,n)){
                    return false;
                }
            }
            else if(color[it]==color[node]){
                return false;
                
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> color(n,-1);
        for(int i=0;i<n;i++){
            if(color[i]==-1){
                color[i]=1;
                if(!dfs(graph,color,i,n)){
                    return false;
                }
            }
        }
        return true;
    }
};