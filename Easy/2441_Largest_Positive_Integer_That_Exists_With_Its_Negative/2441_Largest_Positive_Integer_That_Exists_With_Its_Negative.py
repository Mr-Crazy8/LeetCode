class Solution:
    def findMaxK(self, nums: List[int]) -> int:
        stack_p = []
        stack_n = []
        stack_n_pp = []
        for k in nums:
            if k > 0:
                stack_p.append(k)
            elif k < 0:
                stack_n.append(k)
        stack_p.sort()
        stack_n.sort(reverse=True)
        stack_n_pp = list(map(abs, stack_n))
        duplicates = list(set(stack_p) & set(stack_n_pp))
        if not duplicates:
            return -1
        return max(duplicates)