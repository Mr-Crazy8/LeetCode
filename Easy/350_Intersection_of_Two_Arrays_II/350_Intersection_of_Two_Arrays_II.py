class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        table = dict()
        result = []
        for i in nums1:
            table[i] = table.get(i, 0) + 1
        for n in nums2:
            if table.get(n, 0) > 0:
                result.append(n)
                table[n] -= 1
        return result