class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        long reverse = 0, num = x;
        while(num > 0){
            reverse = reverse * 10 + num % 10;
            num /= 10;
        }
        return reverse == x;      
    }
};
