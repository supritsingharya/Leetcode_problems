//Given an integer x, return true if x is a palindrome, and false otherwise.

class Solution {
public:
    bool isPalindrome(int x) {
        int num = x;  
        int d;        
        long long rev =0 ;
        while(x>0){
            d = x%10;
            rev =rev *10 +d;
            x = x/10;
        }
        return(num == rev);
    }
};
