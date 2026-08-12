vector<bool> prime(1e6 + 1, true);
bool seive(){
        prime[0] = false;
        prime[1] = false;
        for (int i = 2; i * i <= 1e6; i++) {
            if (prime[i]) {
                for (int j = i * i; j <= 1e6; j += i) {
                    prime[j] = false;
                }
            }
        }
        return true;
}
bool k = seive();
class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        int min = INT_MAX;
        vector<int> vec;
        vector<int> ans(2, -1);
        for (int i = left; i <= right; i++) {
            if (prime[i])
                vec.push_back(i);
        }
        int n = vec.size();
        for (int i = 1; i < n; i++) {
            if (vec[i] - vec[i - 1] < min) {
                min = vec[i] - vec[i - 1];
                ans[0] = vec[i - 1];
                ans[1] = vec[i];
            }
        }
        return ans;
    }
};