class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        if(nums.empty())
            return 0;
        vector<int> nmb = nums;
        std::sort(nmb.begin(), nmb.end());
        auto remove = std::unique(nmb.begin(), nmb.end());
        nmb.erase(remove, nmb.end());
        vector<int> book_of_count;
        std::unordered_map<int, int> table;
        int count = 1;
        for(auto& pair: nmb)
            table[pair]++;
        
        for(auto& pair: nmb)
        {
            if(table[(pair+1)] == 1)
                count++;
           else if (table[(pair+1)] != 1)
           {
                book_of_count.push_back(count);
                count = 1;
           }
        }
        auto max_count = std::max_element(book_of_count.begin(), book_of_count.end());
        return (*max_count);
    }
};