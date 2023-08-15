class Palindrome {
public:
    bool isPalindrome(int z) {
        
        // Special cases:
        // false case(s)
        // when z < 0 is not a palindrome.
        // the last digit of the number is 0, in order to be a palindrome
        // the first digit of the number also needs to be 0.
        if(z < 0 || (z % 10 == 0 && z != 0))
        {
            return false;
        }
        
        
        int revertedNumber = 0;
        while(z > revertedNumber)
        {
            revertedNumber = revertedNumber * 10 + z % 10;
            z = z / 10;
        }
        
        // when the length is an odd number, we can get rid of the middle digit by revertedNumber / 10
        // For example when input is 12321, at the end of the while loop we get z = 12, revertedNumber = 123,
        // since the middle digit does not matter in palindrom ( it will always equal to itself), we can simply 
        // get rid of it.
        return (z == revertedNumber || z == revertedNumber / 10);
        
    }
};
