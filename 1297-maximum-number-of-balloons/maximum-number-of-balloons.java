class Solution {
    public int maxNumberOfBalloons(String text) {
        HashMap<Character , Integer> mp = new HashMap<>();
        
       for(Character ch: text.toCharArray()){
        if(ch == 'a' || ch == 'b' || ch == 'l' || ch == 'o' || ch == 'n'){
            // mp[ch]++;
             mp.put(ch, mp.getOrDefault(ch, 0) + 1);
        }        
       }
      
      int b = mp.getOrDefault('b' , 0);
      int a=mp.getOrDefault('a' , 0);
      int l=mp.getOrDefault('l',0);
      int o=mp.getOrDefault('o',0);
      int n=mp.getOrDefault('n',0);

      int ans= Math.min(Math.min(b ,a),Math.min(l/2, o/2));
      ans=Math.min(ans, n);
      return ans ;


    }
}