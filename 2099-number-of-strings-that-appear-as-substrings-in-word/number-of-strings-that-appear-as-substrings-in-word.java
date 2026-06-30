class Solution {
    public int numOfStrings(String[] patterns, String word) {
        // int ans = 0;
        // for (String pattern : patterns) {
        //     for (int i = 0; i <= word.length() - pattern.length(); i++) {
        //         if (word.substring(i, i + pattern.length()).equals(pattern)) {
        //             ans++;
        //             break;
        //         }
        //     }
        // }
        // return ans;


        int ans=0;


        for(String pattern : patterns ){
            for(int i=0; i<= word.length() - pattern.length();i++){
              if(word.substring(i, i + pattern.length()).equals(pattern)){
                ans++;
                break;
              }
            }
        }

        return ans;
    }
}