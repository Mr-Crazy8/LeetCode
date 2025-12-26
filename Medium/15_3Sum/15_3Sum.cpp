class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        vector<int> nums_copy = nums;
        vector<vector<int>> output;
        std::sort(nums_copy.begin(), nums_copy.end());
        int i = 0;
        int max = nums_copy.size();
        while(i < max)
        {
            int L = i+1;
            int R = max - 1;
            if ((i > 0) && (i < max) && (nums_copy[i] == nums_copy[i-1]))
            {
                i++; 
                continue;
            }
            while(L < R)
            {
                int sum = nums_copy[i] + nums_copy[L] + nums_copy[R];
                if(sum == 0)
                {
                    output.push_back({nums_copy[i], nums_copy[L], nums_copy[R]});
                while(L < R && nums_copy[L] == nums_copy[L+1])
                    L++;
                while(L < R && nums_copy[R] == nums_copy[R-1])
                    R--;
                L++;
                R--;
                }
                else if (sum < 0)
                    L++;
                else if (sum > 0)
                    R--;
            }        
            i++;


        }
        return output;
    }
};