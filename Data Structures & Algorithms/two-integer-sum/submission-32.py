class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        map = {}
        for i, v in enumerate(nums): 
            complete = target - v
            if complete in map:
                return [map[complete], i]
            map[v] = i

        for i, v in map.items(): 
            print(i, v)
        return [0, 1]
        