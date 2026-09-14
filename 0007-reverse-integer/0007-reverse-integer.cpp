class Solution {
public:
    int reverse(int x) {
        int dig, temp, rev = 0;
        temp = x;
        for (int i = 0; temp != 0; i++) {
            dig = temp % 10;
            temp = temp / 10;
            if (rev > INT_MAX / 10 || rev < INT_MIN / 10) {
                return 0;
            }
            rev = rev * 10 + dig;
        }
        return rev;
    }
};