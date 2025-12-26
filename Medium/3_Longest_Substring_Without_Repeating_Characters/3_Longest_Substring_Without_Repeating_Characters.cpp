class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        std::unordered_map<char, int>tab_counter;
        int R = 0;
        int L = 0;
        int max = s.size();
        int maxlen = 0;
        while(R < max)
        {
            if(tab_counter[s[R]] != 1)
            {
                tab_counter[s[R]] = 1;
                if(maxlen < (R - L + 1))
                    maxlen = R - L + 1;
                R++;
            }
            else if(tab_counter[s[R]] == 1)
            {
                tab_counter[s[L]] = 0;
                L++;
            }
        }
        return (maxlen);
        
    }
};