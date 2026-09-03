class Solution {
public:
    bool isPalindrome(int x) {
        int num = x;
        long rev = 0;
        int d =0;
        while(num>0){
            d = num%10;
            rev = rev *10 + d;
            num = num/10;
        }
        return (x == rev);
    }
};