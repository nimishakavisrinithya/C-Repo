class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;
            
            // Compare middle element with the next element
            if (nums[mid] < nums[mid + 1])
                low = mid + 1;  // Peak must be on the right
            else
                high = mid;     // Peak is on the left or at mid
        }
        return low;  // low == high points to a peak
    }
};
