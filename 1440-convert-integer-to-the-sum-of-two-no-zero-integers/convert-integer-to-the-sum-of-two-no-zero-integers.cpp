class Solution {
public:

   bool notcon(int a ){
       while(a>0){
         if(a % 10 == 0){
            return false;;
        }
        a=a/10;
       }
        
      return true;

   }
    vector<int> getNoZeroIntegers(int n) {
        for(int i =1 ;i<n;i++){
            int b= n-i;
            if(notcon(i) && notcon(b)){
                return {i,b};
            }
        }
      return {};
    }
};