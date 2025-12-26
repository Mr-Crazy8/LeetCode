class Solution {
public:
    bool isPalindrome(string s) 
    {
        for(char &c: s)
            c = std::tolower(c);
        s.erase(remove(s.begin(), s.end(), ' '), s.end()); 
        std::string s_copy = s;
        std::reverse(s_copy.begin(), s_copy.end());

        int i = 0;
        int j = 0;
        int max = s.length();
        while(i < max && j < max  &&  s[i] && s_copy[i])
        {

            while(i < max && !isalnum(s[i]))
                i++;

            while(j < max && !isalnum(s_copy[j]))
                j++;

            if(i < max && j < max && s_copy[j] != s[i])
                return false;
            i++;
            j++;
        }

        return true;
        
    }
};