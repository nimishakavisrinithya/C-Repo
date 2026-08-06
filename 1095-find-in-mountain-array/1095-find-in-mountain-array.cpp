/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int search(int low, int high, MountainArray& mountainArr, int key) {
        while (low <= high) {
            int mid = low + ((high - low) / 2);
            int num = mountainArr.get(mid);
            if (num == key)
                return mid;
            else {
                if (key < num)
                    high = mid - 1;
                else
                    low = mid + 1;
            }
        }
        return -1;
    }
    int Dsearch(int low, int high, MountainArray& mountainArr, int key) {
        while (low <= high) {
            int mid = low + ((high - low) / 2);
            int num = mountainArr.get(mid);
            if (num == key)
                return mid;
            else {
                if (key > num)
                    high = mid - 1;
                else
                    low = mid + 1;
            }
        }
        return -1;
    }
    int findInMountainArray(int target, MountainArray& mountainArr) {
        int low = 0;
        int high = mountainArr.length() - 1;
        int n = high;
        int mid = 0;
        while (low <= high) {
            mid = low + ((high - low) / 2);
            int num = mountainArr.get(mid);
            if (mid - 1 >= low && mid + 1 <= high &&
                num > mountainArr.get(mid + 1) &&
                num > mountainArr.get(mid - 1)) {
                break;
            } else {
                if (mid + 1 <= high && mountainArr.get(mid + 1) > num)
                    low = mid + 1;
                else
                    high = mid - 1;
            }
        }
        if (mountainArr.get(mid) == target)
            return mid;
        int left = search(0, mid - 1, mountainArr, target);

        if (left != -1)
            return left;

        return Dsearch(mid + 1, n, mountainArr, target);
    }
};