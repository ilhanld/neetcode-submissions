class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        map = {}
        for x in nums:
            print(x)
            if x in map:
                map[x] -= 1
                return True
            map[x] = 1
        
        return False