class Solution {
public:
    bool isPalindrome(string s) {
        string t1 = "";
        string t2 = "";
        for(char str : s)
        {
            if((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z') || (str >= '0' && str <= '9')){
                t1 += tolower(str); 
            }
        }
        t2=t1;
        reverse(t2.begin(), t2.end());

        return t1 == t2;


    }
};
