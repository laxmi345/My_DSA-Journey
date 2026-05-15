class Solution {
public:

    long long mergeSort(vector<long long>& prefix,
                        int low,
                        int high,
                        int lower,
                        int upper) {

        if (high - low <= 1)
            return 0;

        int mid = (low + high) / 2;

        long long count = 0;

        // Left + Right count
        count += mergeSort(prefix, low, mid, lower, upper);
        count += mergeSort(prefix, mid, high, lower, upper);

        int j = mid;
        int k = mid;

        // Count valid ranges
        for (int i = low; i < mid; i++) {

            while (k < high && prefix[k] - prefix[i] < lower)
                k++;

            while (j < high && prefix[j] - prefix[i] <= upper)
                j++;

            count += (j - k);
        }

        // Merge step
        vector<long long> temp;
        int left = low;
        int right = mid;

        while (left < mid && right < high) {

            if (prefix[left] <= prefix[right]) {
                temp.push_back(prefix[left++]);
            } else {
                temp.push_back(prefix[right++]);
            }
        }

        while (left < mid)
            temp.push_back(prefix[left++]);

        while (right < high)
            temp.push_back(prefix[right++]);

        // Copy back
        for (int i = low; i < high; i++) {
            prefix[i] = temp[i - low];
        }

        return count;
    }

    int countRangeSum(vector<int>& nums, int lower, int upper) {

        int n = nums.size();

        vector<long long> prefix(n + 1, 0);

        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + nums[i];
        }

        return mergeSort(prefix, 0, n + 1, lower, upper);
    }
};