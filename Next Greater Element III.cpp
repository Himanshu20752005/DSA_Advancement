class Solution {
public:
    int nextGreaterElement(int n) {
        string digits = to_string(n);
        int len = digits.size();
        int id = -1;

        for (int i = len - 1; i > 0; i--) {
            if (digits[i - 1] < digits[i]) {
                id = i - 1;
                break;
            }
        }

        if (id == -1) return -1;

        int swapIndex = -1;
        for (int i = len - 1; i > id; i--) {
            if (digits[i] > digits[id]) {
                swapIndex = i;
                break;
            }
        }

        swap(digits[id], digits[swapIndex]);
        sort(digits.begin() + id + 1, digits.end());

        long long result = stoll(digits);
        if (result > INT_MAX) return -1;

        return (int)result;
    }
};
