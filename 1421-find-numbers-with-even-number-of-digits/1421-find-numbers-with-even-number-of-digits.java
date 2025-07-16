class Solution {
    public int findNumbers(int[] nums) {
        int cnt =0;
        for(int i : nums){
            if(Integer.toString(i).length()%2==0) cnt++;
        }
        return cnt;
    }
}