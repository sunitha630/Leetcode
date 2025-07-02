class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        nums.sort()
        res1=100000
        res2=100000
        for i in range(len(nums)):
            j = i + 1
            k = len(nums)-1
            while j < k :
                s=nums[i]+nums[j]+nums[k]
                print(s)
                if abs(target-s)<res1:
                    res1=abs(target-s)
                    res2=s
                if s<target: 
                    j = j + 1
                elif(s>target):
                    k = k - 1
                else:
                    j = j + 1
                    k = k - 1
                   
        return res2
                




        