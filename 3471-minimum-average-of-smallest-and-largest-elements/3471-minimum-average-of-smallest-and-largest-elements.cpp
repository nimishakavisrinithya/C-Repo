class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        double avg, m = INT_MAX;

        while (nums.size() > 1) {  // Run until at least 2 elements exist
            auto result = minmax_element(nums.begin(), nums.end());

            avg = (*result.first + *result.second) / 2.0;  // Ensure floating-point division
            m = min(avg, m);

            // Erase max first, then min (to avoid invalid iterators)
            nums.erase(result.second);
            nums.erase(minmax_element(nums.begin(), nums.end()).first);
        }

        return m;
    }
};
