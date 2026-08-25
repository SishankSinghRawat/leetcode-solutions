class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        i=0
        k=0
        if len(nums)==1:
            return 1
        for j in range(1, len(nums)):
            if nums[j-1]==nums[j]:
                j+=1
                continue
            nums[i+1]=nums[j]
            i+=1
            k+=1
            j+=1
        return k+1       
        