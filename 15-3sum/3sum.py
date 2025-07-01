class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        res=[]
        nums.sort()
        for i in range(len(nums)):
            j=i+1
            k=len(nums)-1
            while j<k:
                s=nums[i]+nums[j]+nums[k]
                if(s==0):
                    res.append((nums[i],nums[j],nums[k]))
                    j = j + 1
                    k = k - 1
                elif(s<0):
                    j = j + 1 
                else:
                    k = k - 1
        return [list(t) for t in set(res)]