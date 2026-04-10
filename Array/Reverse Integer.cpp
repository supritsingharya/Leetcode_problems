//Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
//Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

class Solution {
public:
    int reverse(int x) {
        int num = x;
        long rev=0;
        while (num!=0){
        int d = num%10;
        rev = rev*10 + d;
        num = num/10;
    }  
     if (rev > INT_MAX || rev < INT_MIN)
            return 0;
        
        return (int)rev;
    }
};
