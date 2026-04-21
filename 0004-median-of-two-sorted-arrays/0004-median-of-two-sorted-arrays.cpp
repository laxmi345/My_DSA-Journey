class Solution {
public:
    double findMedianSortedArrays(vector<int>& A, vector<int>& B) {
        
        // Step 1: ensure A chhota ho
        if (A.size() > B.size())
            return findMedianSortedArrays(B, A);

        int n1 = A.size(), n2 = B.size();
        int low = 0, high = n1;

        while (low <= high) {
            int cut1 = (low + high) / 2;
            int cut2 = (n1 + n2 + 1) / 2 - cut1;

            int l1 = (cut1 == 0) ? INT_MIN : A[cut1 - 1];
            int l2 = (cut2 == 0) ? INT_MIN : B[cut2 - 1];

            int r1 = (cut1 == n1) ? INT_MAX : A[cut1];
            int r2 = (cut2 == n2) ? INT_MAX : B[cut2];

            // correct partition mil gaya
            if (l1 <= r2 && l2 <= r1) {
                if ((n1 + n2) % 2 == 0)
                    return (max(l1, l2) + min(r1, r2)) / 2.0;
                else
                    return max(l1, l2);
            }
            // left bada hai → left jao
            else if (l1 > r2) {
                high = cut1 - 1;
            }
            // right bada hai → right jao
            else {
                low = cut1 + 1;
            }
        }

        return 0;
    }
};