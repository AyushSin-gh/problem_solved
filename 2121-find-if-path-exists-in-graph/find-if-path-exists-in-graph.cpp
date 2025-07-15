// class Solution {
// public:
//     bool dfs(int srt ,int end , vector<vector<int>>& adj , vector<bool> &vstd){
//         if(srt == end){
//             return true;
//         }
//         vstd[srt] = true;

//         for( int  ngbr : adj[srt]){
//             if(vstd[ngbr] != true ){
//                dfs(srt , end, adj , vstd);
//             }
//         }

//         return false;
//     }
//     bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
//         // bfs or dfs  use ho skta hhh 
//          vector<bool> vstd (n+1 ,  false);
//          vector<vector<int>> adj(n);
//         for(auto edge:edges){
//             int a = edge[0];
//             int b= edge[1];
//             adj[a].push_back(b);
//             adj[b].push_back(a);
//         }
//         return  dfs(source , destination , adj  , vstd);

//     }
// };     

class Solution {
public:
    bool dfs(int srt, int end, vector<vector<int>>& adj, vector<bool>& vstd) {
        if (srt == end) return true;
        vstd[srt] = true;

        for (int ngbr : adj[srt]) {
            if (!vstd[ngbr]) {
                if (dfs(ngbr, end, adj, vstd)) return true;
            }
        }

        return false;
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<bool> vstd(n, false);           // nodes are from 0 to n-1
        vector<vector<int>> adj(n);            // initialize with size n

        for (auto edge : edges) {
            int a = edge[0];
            int b = edge[1];
            adj[a].push_back(b);
            adj[b].push_back(a); // undirected graph
        }

        return dfs(source, destination, adj, vstd);
    }
};
