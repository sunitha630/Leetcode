class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        u=[]
        for i in nums:
            u.append(i*i)
        u.sort()
        return u