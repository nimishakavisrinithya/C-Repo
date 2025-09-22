class Solution {
    public int[] numberOfPairs(int[] nums) {
        int[] arr = new int[2];
        HashMap<Integer,Integer>mpp = new HashMap<>();
        for(Integer x : nums){
            mpp.put(x, mpp.getOrDefault(x,0)+1);
        }
        for(Integer x : mpp.keySet()){
         arr[0]= arr[0] + (mpp.get(x)/2);
         arr[1] = arr[1] + mpp.get(x)%2;
        }
        //arr[1] = mpp.size()-arr[0];
        return arr;
    }
}