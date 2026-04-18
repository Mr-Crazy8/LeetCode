class Solution:
    def addToArrayForm(self, num: List[int], k: int) -> List[int]:
        sys.set_int_max_str_digits(10000)
        nums_str = ''.join(str(x) for x in num)
        fnum_int = int(nums_str)
        output = fnum_int + k
        return list(map(int, str(output)))