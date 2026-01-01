class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        res = int("".join(map(str, digits)))
        u=res+1
        l=[]
        while u!=0:
            t=u%10
            l.append(t)
            u=u//10
        return l[::-1]