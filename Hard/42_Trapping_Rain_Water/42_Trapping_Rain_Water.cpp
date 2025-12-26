class Solution {
public:
    int trap(vector<int>& height) 
    {
        int i = 0;
        int max = height.size();

        vector<int> max_left(max);
        vector<int> max_right(max);

        int current_max = 0;
        for(int j = 0; j < max; j++)
        {
            max_left[j] = current_max;
            if(height[j] > current_max)
                current_max = height[j];
        }

        current_max = 0;
        for(int j = max - 1; j >= 0; j--)
        {
            max_right[j] = current_max;
            if(height[j] > current_max)
                current_max = height[j];
        }
        int L;
        int R;
        int count = 0;
        while(i < max)
        {
            L = max_left[i];
            R = max_right[i];
            int value;
            if(L < R)
            {
                if((value = L - height[i]) > 0)
                    count += value;
            }
            else
            {
                if((value = R - height[i]) > 0)
                    count += value;

            }
            i++;
        }
        return count;
        
    }
};