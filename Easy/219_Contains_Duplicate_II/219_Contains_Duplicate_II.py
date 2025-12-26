class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        int L = 0;
        int R = 0;
        unordered_set<int> pair_with_index;
        int max = nums.size();
        while(R < max)
        {

            while(R - L > k)
            {
                pair_with_index.erase(nums[L]);
                L++;
            }
            if(pair_with_index.count(nums[R]))
                return true;
            pair_with_index.insert(nums[R]);
            R++;
        }
        return false;
    }
};