class Solution:
    def minRemoval(self, nums: List[int], k: int) -> int:
        nums.sort()
        if max(nums) <= min(nums) * k :
            return 0
        counter = 0
        max_len = 0
        i = 0
        left = 0
        for right in range(len(nums)):
            while nums[right] > nums[left] * k:
                left += 1
            max_len = max(max_len, right - left + 1)

        return len(nums) - max_len