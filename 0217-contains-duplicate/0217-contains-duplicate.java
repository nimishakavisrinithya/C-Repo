class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashMap<Integer,Integer>mpp = new HashMap<>();
        for(Integer x : nums){
            if(mpp.containsKey(x)) return true;
            mpp.put(x, mpp.getOrDefault(x,0)+1);
        }
        return false;
    }
}