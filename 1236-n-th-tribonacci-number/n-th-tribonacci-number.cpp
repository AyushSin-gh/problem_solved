class Solution {
public:
    int tribonacci(int n) {
        // if(n==0){
        //     return 0;
        // }

        // else if(n==1 || n==2){
        //     return 1;
        // }

        // return tribonacci(n-1) + tribonacci(n-2) +tribonacci(n-3);

        //recursive approach


       // memoziation 

       if(n==0){
        return 0;
       }

      if(n==1 || n==2){
          return 1;
      }

      int t0=0 , t1=1,t2=1;
      int t3=0; 

      for(int i =3; i<=n;i++){
        t3= t0+t1+t2;
        t0=t1;
        t1=t2;
        t2=t3;
      }

      return t3;
    }
};