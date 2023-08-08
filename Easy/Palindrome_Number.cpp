class Solution {
public:
    bool isPalindrome(int x) {
        int updated_x, digit;
        long long reversed;
        
        if(x < 0) // negative
            return false;
        
        reversed = 0;
        updated_x = x;
        while(updated_x != 0){
            digit = updated_x % 10;
            reversed = reversed * 10 + digit;
            updated_x = updated_x / 10;

        }
        
        return (x == reversed);
    }
};
