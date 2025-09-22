class Solution {
    public int countWords(String[] words1, String[] words2) {
        HashMap<String,Integer>mpp1 = new HashMap<>();
        HashMap<String,Integer>mpp2 = new HashMap<>();
        for(String x : words1){
            mpp1.put(x,mpp1.getOrDefault(x,0)+1);
        }
        for(String x : words2){
            mpp2.put(x,mpp2.getOrDefault(x,0)+1);
        }
        int c=0;
        for(String key : mpp1.keySet()){
            if(mpp1.get(key)==1 && mpp2.containsKey(key) && mpp2.get(key)==1) c++;
        }
        return c;
    }
}