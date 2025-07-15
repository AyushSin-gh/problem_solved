class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
         vector<vector<int>>adj(n+1);
        vector<int> coming (n+1,0);
        vector<int> going(n+1,0);
        if (trust.size() == 0 && n==1){
            return 1;
        }
        else if(trust.size() == 0 && n>1){
            return -1;
        }
        else{
         for( int i=0;i<trust.size();i++){
            int a = trust[i][0];
            int b= trust[i][1]; 
            adj[a].push_back(b);

            coming[b]++;
            going[a]++;
         }

           for(int i =0;i<=n;i++){
            if( coming[i] == n-1   &&  going[i] == 0 ){
                return i;
            }
           }
     

         return -1;
        }
    }
};