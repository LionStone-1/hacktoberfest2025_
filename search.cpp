class Solution {
public:
    int search(vector<int>& nums, int target) {
        return binarySearch(nums, target, 0, nums.size() - 1);
    }

private:
    int binarySearch(vector<int>& nums, int target, int low, int high) {
        if (low > high) return -1;
        int mid = low + (high - low) / 2;  
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] > target) {
            return binarySearch(nums, target, low, mid - 1);
        } else {
            return binarySearch(nums, target, mid + 1, high);
        }
    }
};
